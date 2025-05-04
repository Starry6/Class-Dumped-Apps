@interface AWELoginAfterWorkFlowManager : NSObject
@property (nonatomic) AWELoginAfterWorkFlowObject currentWorkFlow;
- (void)executeWorkFlowWithConfig:completion:;
- (void)setCurrentWorkFlow:;
- (id)currentWorkFlow;
- (void).cxx_destruct;
+ (void)executeWorkFlowWithConfig:completion:;
+ (id)sharedInstance;
@end
