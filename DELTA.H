  // �㭪樨 �ࠩ���:

#define START_FWD_DELTA  0x12
#define STOP_FWD_DELTA   0x11

#define START_REV_DELTA  0x22
#define STOP_REV_DELTA   0x21

#define MSK_RUN_DELTA   0x03
#define RUN_DELTA       0x03
#define ACS_DELTA       0x01
#define STP_DELTA       0x00

  // ��⠭���� �ࠢ����� �ਢ���� �१ �ࠢ���饥 ᫮��
#define Dlt_SET_CTR  1

  // ��� �ਢ��� (�訡�� )
#define Dlt_RES_ERR  2

 // �⥭�� ��᫥���� ��稭� �⪫�祭�� (�訡��)
#define Dlt_RD_ERR   4


#define Dlt_SV_OUT   5
#define Dlt_SA_OUT   6
#define Dlt_SD_OUT   7
#define Dlt_CTRL_OUT 8
#define Dlt_SET_MODE 9

#define Dlt_RD   16

// ��� "�ਢ�� ��ࠢ��" � ᫮�� ���ﭨ�
#define Dlt_OK 0x01

// ��� "��஦���� ⠩���" � ᫮�� �ࠢ�����
#define Dlt_WDT 0x4000
#define MDlt_Dlt_WDT 0xbfff

#define ToutAnsDlt_rtu 100

#define Delta_max_out_err 10
#define Delta_max_inp_err 10

void f_Delta(int ii);
void f_Delta_rd(int ii);
void f_init_Delta(int ii);
void  f_Dlt_wd( int ii);
void f_Delta_WD_rd(int ii);

extern struct s_icp_dev Delta[];
extern struct COM_rqst Delta_Rqst[];

extern int Delta_State[];  // ᫮�� ���ﭨ�
extern int Delta_Ctrl[];   // �ࠫ��饥 ᫮��
extern int Delta_Ctrl_c[]; // ⥪�饥 ���ﭨ� �ࠫ��饣� ᫮��
extern int Delta_SV[];     // ���祭�� ����� ��饭��
extern int Delta_SVc[];    // ⥪�饥 ���ﭨ�  ����� ��饭��
extern int Delta_Err_cod[];// �訡�� ��᫥����� �⪫�祭��

extern int Delta_SA[];  // ⥪�饥 ���ﭨ�  �᪮७�� 2 ᥪ �� 100��
extern int Delta_SAc[];  // ⥪�饥 ���ﭨ�  �᪮७��

extern int Delta_SD[];  // ⥪�饥 ���ﭨ�  ���������� 2 ᥪ �� 100��
extern int Delta_SDc[]; // ⥪�饥 ���ﭨ� ����������
extern int Delta_fn[];     // ॣ���� �㭪権 �ࠩ���

extern int Delta_fl[];
extern int Dlt_wd[];

extern long int Dlt_pool_period[];
extern struct COM_rqst Delta_WD_Rqst[];

extern int Delta_current[];


