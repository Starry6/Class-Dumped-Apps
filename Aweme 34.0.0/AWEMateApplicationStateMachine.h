@interface AWEMateApplicationStateMachine : NSObject
+ (BOOL)enableMateApplicationApproveOptimize;
+ (BOOL)isHelloStateTransition:;
+ (id)approveStateWithCustomClickBlock:;
+ (BOOL)enableMateApplicationApproveOptimizeHello;
+ (id)helloStateWithCustomClickBlock:;
+ (id)lookStateWithCustomClickBlock:;
+ (id)disableInteractState:title:;
+ (id)transitionToApproveState:;
+ (id)transitionToHelloState:;
+ (id)transitionToLookState:;
+ (id)transitionToCheckingState:;
+ (id)transitionToAddedState:;
+ (id)transitionToExpiredState:;
+ (BOOL)isApproveStateTransition:;
@end
