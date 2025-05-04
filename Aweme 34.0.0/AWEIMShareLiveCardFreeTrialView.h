@interface AWEIMShareLiveCardFreeTrialView : UIView
@property (nonatomic) UIVisualEffectView blurEffectBackgroundView;
@property (nonatomic) Q freeTrialStyle;
@property (nonatomic) UILabel freeTrialFinishTitleLabel;
@property (nonatomic) UILabel freeTrialFinishSubtitleLabel;
@property (nonatomic) AWEIMBaseLabel statusLabel;
@property (nonatomic) UIButton button;
- (void)setFreeTrialStyle:;
- (id)blurEffectBackgroundView;
- (void)updateForStyle:;
- (id)freeTrialFinishTitleLabel;
- (void)setFreeTrialFinishTitleLabel:;
- (id)freeTrialFinishSubtitleLabel;
- (void)setFreeTrialFinishSubtitleLabel:;
- (unsigned long long)freeTrialStyle;
- (void)setBlurEffectBackgroundView:;
- (id)initWithFrame:;
- (void)setup;
- (void)setButton:;
- (void).cxx_destruct;
- (id)button;
- (void)setStatusLabel:;
- (id)statusLabel;
@end
