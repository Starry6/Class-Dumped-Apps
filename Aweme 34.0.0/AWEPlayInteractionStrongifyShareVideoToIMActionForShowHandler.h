@interface AWEPlayInteractionStrongifyShareVideoToIMActionForShowHandler : NSObject
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) BOOL canShow;
@property (nonatomic) <AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate> showButtonDelegate;
- (BOOL)canShow;
- (void)setupBinding;
- (void)setCanShow:;
- (void)handleOutShareBackNoti:;
- (void)fetchShareModelAndShowButtonWithTriggerType:;
- (id)showButtonDelegate;
- (BOOL)shouldShowWithTriggerType:;
- (void)setShowButtonDelegate:;
- (void)dealloc;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (BOOL)isSameDayWithDate1:date2:;
+ (BOOL)shouldShowAfterOutShareReturnWithContext:;
+ (void)updateFrequencyControlForOuterShare;
+ (BOOL)p_shouldShowStrongifyShareToIMEntranceAfterOuterShareBaseConditionWithContext:;
+ (BOOL)p_checkCanShowFeedFastShareButtonFrequencyControlForOuterShare;
+ (id)chineseTimeZoneCalendar;
+ (BOOL)shouldShowBasicConditionWithContext:;
+ (void)updateFrequencyControlWithTriggerType:;
@end
