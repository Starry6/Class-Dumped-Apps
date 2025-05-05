@interface IESLivePKGuestScoreView : UIView
@property (nonatomic) IESLiveImageView iconView;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) NSString cachedScore;
- (void)checkCachedScore;
- (void)doAnimationWithScore:;
- (void)updateScore:;
- (id)init;
- (BOOL)isAnimating;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setupUI;
- (id)cachedScore;
- (void)setCachedScore:;
- (id)scoreLabel;
- (void)setScoreLabel:;
@end
