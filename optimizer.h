#ifndef _OPTIMIZER_H_
#define _OPTIMIZER_H_

/**
 * 	�Ż���optimizer�ӿ�˵����
 * 	���ڼ����Ԫ������Ľ��ƽ�
 *
 * 	Inputs:
 * 		������
 * 		�����鼰��ά��
 * 		�����鼰��ά��
 *      ����ȡֵ��Χ
 *		Note:
 *		x��ȡֵ��Χ�������а�����ʾ���뼴�� 
 *
 * 	Output�� 
 * 		�Ż�������������ֵ
 *      ��������Ŀ��ֵ�����
 *
 *  @opt1.h Line 6 to 14 :
 *   	�ڴ˴�����������ֵ���Բ�ͬ��Ӧ�ó��������Ի�ø��õ��Ż�Ч��
 *      N: ���Ӹ���������������Ӿ��ȣ����ǻ��ӳ�����ʱ��
 *      D: ��������������������Ӿ��ȣ����ǻ��ӳ�����ʱ��
 */

class optimizer
{
public:
	
	optimizer(){};
	
	virtual double setOptimizer(double (*foo)(double* , double* ), 
			double* _x_buf, double* _y_buf, int _x_dim, int _y_dim ) = 0;	
	
	~optimizer(){};
	
protected:
	double *x;
	double *y;
	int xd;
	int yd;
	double (*fun)(double* _x_buf, double* _y_buf);
};

#endif //_OPTIMIZER_H_
