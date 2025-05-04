@interface AWEPlayInteractionBottomButtonDouECPViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) NSString douECPUrl;
- (long long)activateType;
- (void)didShowViewByTriggerDelay:;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (BOOL)isDouECPButton:;
- (void)prefetchDouECP:;
- (id)douECPUrl;
- (void)setDouECPUrl:;
- (id)component;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
+ (BOOL)shouldShowButtonForModel:context:;
@end
