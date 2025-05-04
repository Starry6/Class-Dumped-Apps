@interface AWEVideoCoverImageEditGuidePinchView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) BDImageView animationView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q animationLoopCount;
- (void)p_setupUI;
- (void)setAnimationLoopCount:;
- (long long)animationLoopCount;
- (void)p_setupConstraint;
- (void)removeGuideView;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)animationView;
- (void)setAnimationView:;
- (void)tapAction:;
+ (BOOL)needShowEditGuidePinchView;
+ (void)setHasShowEditGuidePinchView;
@end
