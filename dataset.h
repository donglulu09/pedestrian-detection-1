#ifndef DATASET_H
#define DATASET_H


/********************��ģ��*****************************************/


#define th 400  //������ֵ���ɸ���Ч�����е���
#define th_area 400  //������ֵ���ɸ���Ч�����е���
#define PosSamNO 2416  //����������
#define NegSamNO 12180    //����������

#define PosSamListFile "INRIAPerson96X160PosList.txt" //������ͼƬ���ļ����б�
#define NegSamListFile "NoPersonFromINRIAList.txt" //������ͼƬ���ļ����б�

#define TRAIN true  //�Ƿ����ѵ��,true��ʾ����ѵ����false��ʾ��ȡxml�ļ��е�SVMģ��
#define CENTRAL_CROP true   //true:ѵ��ʱ����96*160��INRIA������ͼƬ���ó��м��64*128��С����

#define HardExampleListFile "HardExample_FromINRIA_NegList.txt"
//HardExample�����������������HardExampleNO����0����ʾ�������ʼ���������󣬼�������HardExample����������
//��ʹ��HardExampleʱ��������Ϊ0����Ϊ������������������������ά����ʼ��ʱ�õ����ֵ
#define HardExampleNO 6087

#define TermCriteriaCount 50000  //������ֹ��������������50000�λ����С��FLT_EPSILONʱֹͣ����

/*********************************��������*************************************/

#endif
