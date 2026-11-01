#   Variable List

    </br>// PARAMETERS (HMI -> PLC) - retained after power loss
    </br>Cheio      : UINT;    // 4x4 (40004) - Total capacity
    </br>Vazio      : UINT;    // 4x5 (40005) - Tank empty
    </br>Lq1Quant   : UINT;    // 4x6 (40006) - Liquid 1 quantity
    </br>Lq2Quant   : UINT;    // 4x7 (40007) - Liquid 2 quantity
    </br>TimeM      : UINT;    // 4x8 (40008) - Mixing time

</br>
    
    </br>// COMMANDS (HMI -> PLC)
    </br>ST10       : BOOL;    // 0x8 (00008) - HMI Start/Stop

</br>

    </br>// ACTUATORS (PLC -> HMI)
    </br>V1         : BOOL;    // 0x1 (00001) - Valve 1 - Liquid 3 inlet
    </br>V2         : BOOL;    // 0x2 (00002) - Valve 2 - Liquid 2 inlet
    </br>V3         : BOOL;    // 0x3 (00003) - Valve 3 - Mixture outlet
    </br>B1         : BOOL;    // 0x4 (00004) - Liquid 1 pump
    </br>B2         : BOOL;    // 0x5 (00005) - Liquid 2 pump
    </br>B3         : BOOL;    // 0x6 (00006) - Liquid 3 pump - mixture
    </br>M1         : BOOL;    // 0x7 (00007) - Mixer motor

</br>

    </br>// PROCESS (PLC -> HMI)
    </br>P1         : UINT;    // 4x1 (40001) - Pump 1 flow rate
    </br>P2         : UINT;    // 4x2 (40002) - Pump 2 flow rate
    </br>Nivel      : UINT;    // 4x3 (40003) - Liquid level in tank
