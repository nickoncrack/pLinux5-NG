#include "offsets.h"


offset_list off_1360 = {
    .IOMMU_SOFTC = 0,

    // symbols
    .KERNEL_SYM_DMPML4I                 = 0x03B49294,
    .KERNEL_SYM_DMPDPI                  = 0x03B49298,
    .KERNEL_SYM_PML4PML4I               = 0x03B47E4C,
    .KERNEL_SYM_SYS_GETUID              = 0x002A8D60,
    .FUN_PRINTF                         = 0x004ADD60,
    .KERNEL_SYM_HV_MP_STARTUP_CALL      = 0x00C16EE0,
    .KERNEL_SYM_MP_STARTUP_INIT_VECTOR  = 0x00269FB8,
    .KERNEL_SYM_PMAP_STORE              = 0x03B48FF8,
    .KERNEL_SYM_DATA_CAVE               = 0x02D39000,
    .IDT                                = 0x03BB4300,
    .COMMON_TSS                         = 0x03BB6FE0,
    .HV_SYM_HEAP_BASE                   = 0x00083028,
    .HV_SYM_PCPUS                       = 0x00082A60,

    // gadgets
    .GAD_ADD_RSP_28_POP_RBP_RET = 0x25213E,
    .GAD_IRETQ                  = 0x257B3D,
    .GAD_POP_RAX_RET            = 0x2912A1,
    .GAD_POP_RCX_RET            = 0x2918B2,
    .GAD_POP_RDI_RET            = 0x28CE6D,
    .GAD_POP_RSI_RET            = 0x34CB91,
    .GAD_POP_RDX_RET            = 0x2A0F7B,
    .GAD_POP_R8                 = 0xB8CA6D,
    .GAD_POP_RSP_RET            = 0x291C42,
    .GAD_STORE_RCX_R8           = 0x474389,
    .GAD_STORE_RDI8_RCX         = 0x32693F,
    .GAD_OR_RCX_EAX             = 0x321EA0,
    .GAD_SET_DR7                = 0xA07BA6,
    .GAD_ST_RCX_RDX             = 0x82B915,
    .GAD_ST_RCX_RAX             = 0x2BB28F,
    .GAD_MOV_RAX_RSI            = 0x8E3A44,
    .GAD_MOV_RAX_RDI            = 0xBECDEA,
    .GAD_REP_MOVSB              = 0x25D027,
    .GAD_CLD                    = 0x30644F,
    .GAD_RET_TRAMP              = 0x2912A2,
    .GAD_DBREG_RESUME           = 0x2529D8
};