@interface AWELiveCommercialPlayableLoadingView : UIView
@property (nonatomic) UIImageView playableGameView;
@property (nonatomic) UILabel playableGameName;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) UIImageView playableFlipIconView;
@property (nonatomic) UILabel tipsLabel;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)handleOrientationChanged:withCompletion:;
- (void)configPlayableLoadingViewWithAdInfo:;
- (id)playableGameView;
- (id)playableGameName;
- (id)playableFlipIconView;
- (void)setPlayableGameView:;
- (void)setPlayableGameName:;
- (void)setPlayableFlipIconView:;
- (id)init;
- (void).cxx_destruct;
- (id)loadingLabel;
- (void)setLoadingLabel:;
@end
