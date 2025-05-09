@interface IESLivePKVoteScoreBar : UIView
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) <IESLiveRevenueInteractPlayModel> playModel;
@property (nonatomic) q scoreBarEnhanceRatio;
@property (nonatomic) IESLiveImageView backrgoundView;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UIFont scoreTextFont;
@property (nonatomic) IESLiveGradientView leftScoreView;
@property (nonatomic) IESLiveGradientView rightScoreView;
- (id)attributedTextStringWith:;
- (id)backrgoundView;
- (id)disposable;
- (BOOL)enableScoreBarOpt;
- (id)initWithDIContext:;
- (void)layoutOptUI;
- (id)leftScoreView;
- (void)observeData;
- (id)playModel;
- (void)resetLabelAccessibilityLabel;
- (id)rightScoreView;
- (long long)scoreBarEnhanceRatio;
- (id)scoreTextFont;
- (void)setBackrgoundView:;
- (void)setDisposable:;
- (void)setLeftScoreView:;
- (void)setPlayModel:;
- (void)setRightScoreView:;
- (void)setScoreBarEnhanceRatio:;
- (void)setScoreTextFont:;
- (void)showResultTagWith:;
- (void)updateScoreBar;
- (void)updateScoreBarAnimated:;
- (void)updateScoreLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:;
- (void)setRightLabel:;
- (void)layoutUI;
@end
