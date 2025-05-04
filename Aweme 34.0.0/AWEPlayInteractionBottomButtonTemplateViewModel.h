@interface AWEPlayInteractionBottomButtonTemplateViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
- (long long)activateType;
- (BOOL)canRespondToTriggerType:;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (id)component;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
+ (BOOL)shouldShowButtonForModel:context:;
@end
