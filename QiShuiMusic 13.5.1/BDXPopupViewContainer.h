@interface BDXPopupViewContainer : UIView
@property (nonatomic) double currentTopConstraintOffset;
@property (nonatomic) UIView<BDXNavigationBarProtocol> headerBar;
@property (nonatomic) UIView<BDXPopupContentProtocol> xView;
@property (nonatomic) UIView closeIndicator;
- (double)__headerBarHeight;
- (void)__updateSubViews;
- (void)addCloseIndicator:;
- (id)closeIndicator;
- (double)currentTopConstraintOffset;
- (id)headerBar;
- (id)initWithConfig:context:;
- (void)setCloseIndicator:;
- (void)setCurrentTopConstraintOffset:;
- (void)setUpBackgroundColor:;
- (BOOL)isLandscape;
- (void)setTopConstraint:;
- (void).cxx_destruct;
- (id)xView;
@end
