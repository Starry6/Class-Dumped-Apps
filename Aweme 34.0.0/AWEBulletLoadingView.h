@interface AWEBulletLoadingView : UIView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) MASConstraint topPaddingConstraint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNeedsLayout;
- (void)willMoveToSuperview:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setTopPaddingConstraint:;
- (id)topPaddingConstraint;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
@end
