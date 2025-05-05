@interface IESLivePKComponentResult : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveAnimatedImageView animationView;
@property (nonatomic) UIImageView consecutiveWinImageView;
@property (nonatomic) UILabel consecutiveWinLabel;
@property (nonatomic) NSString customizeSkinURL;
- (void)componentDidLoad;
- (void)componentPKing;
- (id)consecutiveWinImageView;
- (id)consecutiveWinLabel;
- (id)customizeSkinURL;
- (id)getconsecutiveWinUrlWithCount:;
- (void)setConsecutiveWinImageView:;
- (void)setConsecutiveWinLabel:;
- (void)setCustomizeSkinURL:;
- (void)showResultViewWith:;
- (void)showToastIfNeeded;
- (void)showconsecutiveWinViewIfNeed:;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
@end
