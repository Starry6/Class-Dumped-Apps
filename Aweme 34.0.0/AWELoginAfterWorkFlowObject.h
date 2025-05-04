@interface AWELoginAfterWorkFlowObject : NSObject
@property (nonatomic) q workFlowID;
@property (nonatomic) AWELoginAfterWorkFlowConfig config;
@property (nonatomic) @? completion;
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) UIViewController currentViewController;
- (void)checkNewUserEdit;
- (long long)workFlowID;
- (id)aAWEUserCommonAdapter;
- (id)initWithConfig:completion:;
- (void)setWorkFlowID:;
- (void)setConfig:;
- (id)completion;
- (void)execute;
- (void)finishWithResult:;
- (id)config;
- (void)setCompletion:;
- (void)finish;
- (void).cxx_destruct;
- (id)navigationController;
- (id)currentViewController;
+ (Class)aAWEUserCommonAdapterClass;
@end
