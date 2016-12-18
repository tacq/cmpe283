#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

#define MAX_VM_COUNT 8

extern int vmextcntr_exception_nmi;
extern int vmextcntr_external_interrupt;
extern int vmextcntr_triple_fault;
extern int vmextcntr_nmi_window;
extern int vmextcntr_io_instruction;
extern int vmextcntr_cr_access;
extern int vmextcntr_dr_access;
extern int vmextcntr_cpuid;
extern int vmextcntr_msr_read;
extern int vmextcntr_msr_write;
extern int vmextcntr_pending_interrupt;
extern int vmextcntr_hlt;
extern int vmextcntr_invd;
extern int vmextcntr_invlpg;
extern int vmextcntr_rdpmc;
extern int vmextcntr_vmcall;
extern int vmextcntr_vmclear;
extern int vmextcntr_vmlaunch;
extern int vmextcntr_vmptrld;
extern int vmextcntr_vmptrst;
extern int vmextcntr_vmread;
extern int vmextcntr_vmresume;
extern int vmextcntr_vmwrite;
extern int vmextcntr_vmoff;
extern int vmextcntr_vmon;
extern int vmextcntr_tpr_below_threshold;
extern int vmextcntr_apic_access;
extern int vmextcntr_apic_write;
extern int vmextcntr_eoi_induced;
extern int vmextcntr_wbinvd;
extern int vmextcntr_xsetbv;
extern int vmextcntr_task_switch;
extern int vmextcntr_mce_during_vmentry;
extern int vmextcntr_ept_violation;
extern int vmextcntr_ept_misconfig;
extern int vmextcntr_pause_instruction;
extern int vmextcntr_mwait_instruction;
extern int vmextcntr_monitor_trap_flag;
extern int vmextcntr_monitor_instruction;
extern int vmextcntr_invept;
extern int vmextcntr_invvpid;
extern int vmextcntr_xsaves;
extern int vmextcntr_xrstors;
extern int vmextcntr_pml_full;
extern int vmextcntr_pcommit;


// ============

extern int vmextcntr_exception_nmis[MAX_VM_COUNT];
extern int vmextcntr_external_interrupts[MAX_VM_COUNT];
extern int vmextcntr_triple_faults[MAX_VM_COUNT];
extern int vmextcntr_nmi_windows[MAX_VM_COUNT];
extern int vmextcntr_io_instructions[MAX_VM_COUNT];
extern int vmextcntr_cr_accesss[MAX_VM_COUNT];
extern int vmextcntr_dr_accesss[MAX_VM_COUNT];
extern int vmextcntr_cpuids[MAX_VM_COUNT];
extern int vmextcntr_msr_reads[MAX_VM_COUNT];
extern int vmextcntr_msr_writes[MAX_VM_COUNT];
extern int vmextcntr_pending_interrupts[MAX_VM_COUNT];
extern int vmextcntr_hlts[MAX_VM_COUNT];
extern int vmextcntr_invds[MAX_VM_COUNT];
extern int vmextcntr_invlpgs[MAX_VM_COUNT];
extern int vmextcntr_rdpmcs[MAX_VM_COUNT];
extern int vmextcntr_vmcalls[MAX_VM_COUNT];
extern int vmextcntr_vmclears[MAX_VM_COUNT];
extern int vmextcntr_vmlaunchs[MAX_VM_COUNT];
extern int vmextcntr_vmptrlds[MAX_VM_COUNT];
extern int vmextcntr_vmptrsts[MAX_VM_COUNT];
extern int vmextcntr_vmreads[MAX_VM_COUNT];
extern int vmextcntr_vmresumes[MAX_VM_COUNT];
extern int vmextcntr_vmwrites[MAX_VM_COUNT];
extern int vmextcntr_vmoffs[MAX_VM_COUNT];
extern int vmextcntr_vmons[MAX_VM_COUNT];
extern int vmextcntr_tpr_below_thresholds[MAX_VM_COUNT];
extern int vmextcntr_apic_accesss[MAX_VM_COUNT];
extern int vmextcntr_apic_writes[MAX_VM_COUNT];
extern int vmextcntr_eoi_induceds[MAX_VM_COUNT];
extern int vmextcntr_wbinvds[MAX_VM_COUNT];
extern int vmextcntr_xsetbvs[MAX_VM_COUNT];
extern int vmextcntr_task_switchs[MAX_VM_COUNT];
extern int vmextcntr_mce_during_vmentrys[MAX_VM_COUNT];
extern int vmextcntr_ept_violations[MAX_VM_COUNT];
extern int vmextcntr_ept_misconfigs[MAX_VM_COUNT];
extern int vmextcntr_pause_instructions[MAX_VM_COUNT];
extern int vmextcntr_mwait_instructions[MAX_VM_COUNT];
extern int vmextcntr_monitor_trap_flags[MAX_VM_COUNT];
extern int vmextcntr_monitor_instructions[MAX_VM_COUNT];
extern int vmextcntr_invepts[MAX_VM_COUNT];
extern int vmextcntr_invvpids[MAX_VM_COUNT];
extern int vmextcntr_xsavess[MAX_VM_COUNT];
extern int vmextcntr_xrstorss[MAX_VM_COUNT];
extern int vmextcntr_pml_fulls[MAX_VM_COUNT];
extern int vmextcntr_pcommits[MAX_VM_COUNT];

extern int v_cpuid[MAX_VM_COUNT];
extern ktime_t enter_time;
extern ktime_t exit_time;

int init_module(void)
{
    
    // ===
    printk("\nEntry time is: %d", enter_time );
    printk("\nExit time is: %d", exit_time );
    
    // at least you need start a VM
    printk("\n Active CPU Id: %d", v_cpuid[0]);
    for(int i = 1; i < MAX_VM_COUNT; i++) {
        
        if(v_cpuid[i] == 0 ) {
            break;
        } else {
            printk("\n Active CPU Id: %d", v_cpuid[i]);
        }
    }
    
    
    printk("andser")
    for(int i = 0; i < MAX_VM_COUNT; i++) {
        // per cup tota exit
        long sum = (vmextcntr_exception_nmis[i] + ...);
        ava =     sum/(entry - exit)

        p
    }
    
    
    for(int i = 0; i < MAX_VM_COUNT; i++) {
        
        if(i == 0 ){
            //vmextcntr_io_instructions
            printk("\n vmextcntr_cr_accesss Total: %d", vmextcntr_cr_accesss[i]);
        } else {
            
            if (v_cpuid[i] == 0) {
                break;
            } else {
                printk("\n vmextcntr_cr_accesss Total: %d", vmextcntr_cr_accesss[i]);
            }
        }
        
    }
    
    for(int i = 0; i < MAX_VM_COUNT; i++) {
        
        if(i == 0 ){
            //vmextcntr_io_instructions
            printk("\n vmextcntr_io_instructions Total: %d", vmextcntr_io_instructions[i]);
        } else {
            
            if (v_cpuid[i] == 0) {
                break;
            } else {
                printk("\n vmextcntr_io_instructions Total: %d", vmextcntr_io_instructions[i]);
            }
        }
        
    }
    
    
    
    
    
	printk("\nHere are the various VM Exit Counts:");

	printk("\nVMEXTCNT_EXCEPTION_NMI:");
	printk("%d",vmextcntr_exception_nmi);
	
	printk("\nVMEXTCNT_EXTERNAL_INTERRUPT:");
	printk("%d",vmextcntr_external_interrupt);
	
	printk("\nVMEXTCNT_TRIPLE_FAULT:");
	printk("%d",vmextcntr_triple_fault);
	
	printk("\nVMEXTCNT_NMI_WINDOW:");
	printk("%d",vmextcntr_nmi_window);
	
	printk("\nVMEXTCNT_IO_INSTRUCTION:");
	printk("%d",vmextcntr_io_instruction);
	
	printk("\nVMEXTCNT_CR_ACCESS:");
	printk("%d",vmextcntr_cr_access);
	
	printk("\nVMEXTCNT_DR_ACCESS:");
	printk("%d",vmextcntr_dr_access);
	
	printk("\nVMEXTCNT_CPUID:");
	printk("%d",vmextcntr_cpuid);
	
	printk("\nVMEXTCNT_MSR_READ:");
	printk("%d",vmextcntr_msr_read);
	
	printk("\nVMEXTCNT_MSR_WRITE:");
	printk("%d",vmextcntr_msr_write);
	
	printk("\nVMEXTCNT_PENDING_INTERRUPT:");
	printk("%d",vmextcntr_pending_interrupt);
	
	printk("\nVMEXTCNT_HLT:");
	printk("%d",vmextcntr_hlt);
	
	printk("\nVMEXTCNT_INVD:");
	printk("%d",vmextcntr_invd);
	
	printk("\nVMEXTCNT_INVLPG:");
	printk("%d",vmextcntr_invlpg);
	
	printk("\nVMEXTCNT_RDPMC:");
	printk("%d",vmextcntr_rdpmc);
	
	printk("\nVMEXTCNT_VMCALL:");
	printk("%d",vmextcntr_vmcall);
	
	printk("\nVMEXTCNT_VMCLEAR:");
	printk("%d",vmextcntr_vmclear);
	
	printk("\nVMEXTCNT_VMLAUNCH:");
	printk("%d",vmextcntr_vmlaunch);
	
	printk("\nVMEXTCNT_VMPTRLD:");
	printk("%d",vmextcntr_vmptrld);
	
	printk("\nVMEXTCNT_VMPTRST:");
	printk("%d",vmextcntr_vmptrst);
	
	printk("\nVMEXTCNT_VMREAD:");
	printk("%d",vmextcntr_vmread);
	
	printk("\nVMEXTCNT_VMRESUME:");
	printk("%d",vmextcntr_vmresume);
	
	printk("\nVMEXTCNT_VMWRITE:");
	printk("%d",vmextcntr_vmwrite);
	
	printk("\nVMEXTCNT_VMOFF:");
	printk("%d",vmextcntr_vmoff);
	
	printk("\nVMEXTCNT_VMON:");
	printk("%d",vmextcntr_vmon);
	
	printk("\nVMEXTCNT_TPR_BELOW_THRESHOLD:");
	printk("%d",vmextcntr_tpr_below_threshold);
	
	printk("\nVMEXTCNT_APIC_ACCESS:");
	printk("%d",vmextcntr_apic_access);
	
	printk("\nVMEXTCNT_APIC_WRITE:");
	printk("%d",vmextcntr_apic_write);
	
	printk("\nVMEXTCNT_EOI_INDUCED:");
	printk("%d",vmextcntr_eoi_induced);
	
	printk("\nVMEXTCNT_WBINVD:");
	printk("%d",vmextcntr_wbinvd);
	
	printk("\nVMEXTCNT_XSETBV:");
	printk("%d",vmextcntr_xsetbv);
	
	printk("\nVMEXTCNT_TASK_SWITCH:");
	printk("%d",vmextcntr_task_switch);
	
	printk("\nVMEXTCNT_MCE_DURING_VMENTRY:");
	printk("%d",vmextcntr_mce_during_vmentry);
	
	printk("\nVMEXTCNT_EPT_VIOLATION:");
	printk("%d",vmextcntr_ept_violation);
	
	printk("\nVMEXTCNT_EPT_MISCONFIG:");
	printk("%d",vmextcntr_ept_misconfig);
	
	printk("\nVMEXTCNT_PAUSE_INSTRUCTION:");
	printk("%d",vmextcntr_pause_instruction);
	
	printk("\nVMEXTCNT_MWAIT_INSTRUCTION:");
	printk("%d",vmextcntr_mwait_instruction);
	
	printk("\nVMEXTCNT_MONITOR_TRAP_FLAG:");
	printk("%d",vmextcntr_monitor_trap_flag);
	
	printk("\nVMEXTCNT_MONITOR_INSTRUCTION:");
	printk("%d",vmextcntr_monitor_instruction);
	
	printk("\nVMEXTCNT_INVEPT:");
	printk("%d",vmextcntr_invept);
	
	printk("\nVMEXTCNT_INVVPID:");
	printk("%d",vmextcntr_invvpid);
	
	printk("\nVMEXTCNT_XSAVES:");
	printk("%d",vmextcntr_xsaves);
	
	printk("\nVMEXTCNT_XRSTORS:");
	printk("%d",vmextcntr_xrstors);
	
	printk("\nVMEXTCNT_PML_FULL:");
	printk("%d",vmextcntr_pml_full);
	
	printk("\nVMEXTCNT_PCOMMIT:");
	printk("%d",vmextcntr_pcommit);

	return 0;
}

void cleanup_module(void)
{
	printk("\nVM Exit Counts finish!");
}
