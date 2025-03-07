#ifndef WALKING_H
#define WALKING_H

#include "../../MPC/MPCLocomotion.h"
#include "FSMState.h"

class FSMState_Walking: public FSMState
{
    public:
        FSMState_Walking(ControlFSMData *data);
        ~FSMState_Walking(){}
        void enter();
        void run();
        void exit();
        FSMStateName checkTransition();
    
    private:
        MPCLocomotion Cmpc;
        int counter;
        Vec3<double> v_des_body;
        double turn_rate = 0;
        double pitch, roll;
};

#endif