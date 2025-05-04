@interface AWEIMStrangerBlockMessageTopTipViewInteractor : AWEIMStrangerCommonTopTipViewInteractor
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)didClickTopTipViewActionBtnWithType:;
- (void)didClickTopTipViewCloseBtnWithType:;
- (id)tipAttributedText;
- (void)trackStrangerMessageBlockBarShow;
- (void)showTopTipView;
- (void)trackStrangerMessageBlockBarClickSetting;
- (void)trackStrangerMessageBlockBarClose;
- (id)init;
+ (id)zeroOclockDateInLocalTimeZoneWithDate:;
+ (id)topTipViewDismissTimeKey;
+ (void)shouldShowTopTipViewWithViewModel:completion:;
@end
