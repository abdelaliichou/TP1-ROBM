import sys
if sys.prefix == '/home/aichou/uni_projects/ROBM/robm-pixi/.pixi/envs/default':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/aichou/uni_projects/ROBM/robm-pixi/src/install/robm_tp2_move'
