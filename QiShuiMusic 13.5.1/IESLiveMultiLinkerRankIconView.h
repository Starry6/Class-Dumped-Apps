@interface IESLiveMultiLinkerRankIconView : UIView
@property (nonatomic) UIImageView rankIconView;
- (void)doRankChangeAnimationWithFromRank:toRank:completion:;
- (void)doTopRankAnimationWithFadeIconView:completion:;
- (double)iconSizeInIphone;
- (id)initWithRankIndex:;
- (id)rankIconImageName:;
- (id)rankIconView;
- (void)setRankIconView:;
- (void)updateImageWithRankWith:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
@end
