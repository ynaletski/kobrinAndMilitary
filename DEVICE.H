
//#define BIO_1

#define PMP_LG

#define ICP_TSD
//#define TSD_GLB
#define ICP_7060
#define ICP_7041 //(закомментировать для военных, нужен для кобрина)
#define RTU_MVD
#define ICP_7017C
//#define RTU_Delta
//#define RTU_Delta_C
//#define RTU_ComSK
//#define EKD_800
#define MMI_NEW
//#define MMI_ICP

#define RTU_OFP
#define Shtray (0) //1-военные, 0-Кобрин

//10.06.2021 YN
                          // 1 - перепадчик даавления на фильтре (Кобрин)
#define PressureDrop (1)  // 2 - два датчика давления до/после фильтра (Военные)
                          //   - закоментировать если отсутствуют 

//11.06.2021 YN
#define PresenceLiquid // наличие среды в фильтре (дискретный сигнал)     //(Военные и Кобрин) 
                        // закоментировать если отсутствует

//27.10.2021 YN
#define N_Pipes //Номера труб для верхнего и нижнего налива (Кобрин)

//18.11.2021 YN
#define weightedAverageTemperature //средневзвешенная температура закоментировать если не надо