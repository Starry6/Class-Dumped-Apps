@interface AWEIMStrangerPrivateMsgSettingTopTipInteractor : AWEIMStrangerCommonTopTipViewInteractor
@property (nonatomic) AWEIMStrangerTabBannerView tipView;
@property (nonatomic) @? tipViewClickBlock;
@property (nonatomic) q whoCanMessageValue;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)p_didClickTip;
- (void)showTopTipView;
- (void)setTipViewClickBlock:;
- (long long)whoCanMessageValue;
- (void)setWhoCanMessageValue:;
- (void)updateTipView;
- (id)tipViewClickBlock;
- (void)setTipView:;
- (void).cxx_destruct;
- (id)tipView;
@end
