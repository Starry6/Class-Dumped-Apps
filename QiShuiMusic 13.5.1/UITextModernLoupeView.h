@interface UITextModernLoupeView : UIView
@property (nonatomic) {CGSize=dd} preferredSize;
@property (nonatomic) <UICoordinateSpace> containerCoordinateSpace;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) double visualOffset;
@property (nonatomic) {CGPoint=dd} modelPosition;
- (BOOL)visible;
- (void)setVisible:;
- (void)_displayLinkFired:;
- (void)layoutSubviews;
- (BOOL)statusBarHidden;
- (void)traitCollectionDidChange:;
- (void)setStatusBarHidden:;
- (id)initWithSourceView:;
- (void).cxx_destruct;
- (id)preferredSize;
- (id)containerCoordinateSpace;
- (void)setVisible:animated:;
- (void)_updateColorsForTraitCollection:;
- (void)_stopDisplayLink;
- (id)backgroundColorIfNecessary;
- (void)setModelPosition:;
- (void)setVisible:animated:removeWhenComplete:;
- (double)visualOffset;
- (void)setVisualOffset:;
- (id)modelPosition;
+ (BOOL)isModernLoupeEnabled;
@end
