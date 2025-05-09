@interface AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyV12 : NSObject
@property (nonatomic) AWEIMFeedShareGuideBarModelV2 configModel;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) BOOL canShowButtonAfterStartPlay;
@property (nonatomic) BOOL canShowButtonAfterDiggo;
@property (nonatomic) BOOL canShowButtonAfterPlayFinish;
@property (nonatomic) BOOL canShowButtonAfterPlayXTime;
@property (nonatomic) BOOL hasLogBtnType;
@property (nonatomic) @? showGuideHandler;
@property (nonatomic) @? clickLikeHandler;
@property (nonatomic) <AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate> showButtonDelegate;
@property (nonatomic) BOOL canShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)configModel;
- (void)setConfigModel:;
- (void)setupBinding;
- (void)setCanShow:;
- (void)fetchShareModelAndShowButtonWithTriggerType:;
- (id)showButtonDelegate;
- (void)setShowButtonDelegate:;
- (void)p_removeOlderFollowGuideHandler;
- (BOOL)canShowButtonAfterStartPlay;
- (void)setCanShowButtonAfterStartPlay:;
- (BOOL)canShowButtonAfterDiggo;
- (void)setCanShowButtonAfterDiggo:;
- (BOOL)canShowButtonAfterPlayFinish;
- (void)setCanShowButtonAfterPlayFinish:;
- (BOOL)canShowButtonAfterPlayXTime;
- (void)setCanShowButtonAfterPlayXTime:;
- (BOOL)shouldShowBasicCondition;
- (void)p_setupHandler;
- (id)clickLikeHandler;
- (id)showGuideHandler;
- (BOOL)shouldShowQuickShareButtonAfterDiggo;
- (void)setClickLikeHandler:;
- (BOOL)hasLogBtnType;
- (void)setHasLogBtnType:;
- (BOOL)shouldShowQuickShareButtonWhenVideoStartPlay;
- (BOOL)shouldShowQuickShareButtonWhenPlayXTime;
- (BOOL)shouldShowQuickShareButtonWhenPlayFinish;
- (void)setShowGuideHandler:;
- (void)updateFrequencyControl;
- (void)dealloc;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (BOOL)shouldShowBasicConditionWithContext:;
+ (BOOL)shouldRequestPitayaWithContext:;
@end
