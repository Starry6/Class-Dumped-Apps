@interface AWEPlayInteractionBottomButtonMusicCardListenLaterViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) BOOL needBlockFlag;
- (long long)activateType;
- (void)didShowViewByTriggerDelay:;
- (BOOL)canRespondToTriggerType:;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (void)hideListenLaterButton;
- (void)setNeedBlockFlag:;
- (BOOL)needBlockFlag;
- (id)component;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
- (void)setupNotifications;
+ (BOOL)shouldShowButtonForModel:context:;
@end
