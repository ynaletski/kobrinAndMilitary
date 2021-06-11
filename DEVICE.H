
//#define BIO_1

#define PMP_LG

#define ICP_TSD
//#define TSD_GLB
#define ICP_7060
//#define ICP_7041
#define RTU_MVD
#define ICP_7017C
//#define RTU_Delta
//#define RTU_Delta_C
//#define RTU_ComSK
//#define EKD_800
#define MMI_NEW
//#define MMI_ICP

#define RTU_OFP
#define Shtray (0)

//10.6.2021 YN
                          // 1 - перепадчик даавления на фильтре
#define PressureDrop (2)  // 2 - два датчика давления до/после фильтра
                          //   - закоментировать если отсутствуют 

//11.06.2021 YN
#define PresenceLiquid // наличие среды в фильтре (дискретный сигнал)
                        // закоментировать если отсутствует