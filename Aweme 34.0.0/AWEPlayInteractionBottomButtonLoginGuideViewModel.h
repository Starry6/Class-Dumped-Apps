@interface AWEPlayInteractionBottomButtonLoginGuideViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) <AFDFeedLoginGuideManagerProtocol> manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (long long)activateType;
- (void)didShowViewByTriggerDelay:;
- (BOOL)canRespondToTriggerType:;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (BOOL)canShowLoginGuideBtn;
- (void)setManager:;
- (void)dealloc;
- (id)component;
- (id)manager;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
+ (BOOL)shouldShowButtonForModel:context:;
@end
