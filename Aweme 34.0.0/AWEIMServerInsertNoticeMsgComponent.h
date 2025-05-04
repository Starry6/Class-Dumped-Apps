@interface AWEIMServerInsertNoticeMsgComponent : AWEIMComponentBase
@property (nonatomic) NSArray firstScreenMessages;
@property (nonatomic) NSMutableArray messagesWaitedForCheckingFirstScreenAppearance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)vcParent;
- (void)insertNoticeMessageWithModel:;
- (void)didHaveFirstScreenCells;
- (BOOL)shouldInsertMsg:;
- (void)insertMessageWithMsg:conversationID:;
- (void)setMessageLastInsertTimeForMsg:;
- (BOOL)isEnabledByExperimentWithMsg:;
- (BOOL)shouldPassFrequencyLimitByTimeLengthWithMsg:;
- (BOOL)shouldPassFrequencyLimitByFirstScreenAppearanceWithMsg:;
- (BOOL)shouldLimitFrequencyByTimeLengthWithAweType:;
- (BOOL)shouldLimitFrequencyByFirstScreenAppearanceWithAweType:;
- (id)firstScreenMessages;
- (BOOL)isMatchedWithFirstScreenMessagesForMessage:;
- (id)messagesWaitedForCheckingFirstScreenAppearance;
- (void)setFirstScreenMessages:;
- (void)setMessagesWaitedForCheckingFirstScreenAppearance:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
