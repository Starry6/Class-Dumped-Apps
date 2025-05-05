@interface OBAnimationView : UIView
@property (nonatomic) CALayer packageLayer;
@property (nonatomic) CAPackage package;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} preferredFrame;
@property (nonatomic) double scale;
@property (nonatomic) <OBAnimationAppearanceChangeDelegate> appearanceChangeDelegate;
@property (nonatomic) BOOL flipForRTL;
- (void)setPackage:;
- (id)package;
- (void)_setPackage:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setScale:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (double)defaultScale;
- (double)scale;
- (id)packageLayer;
- (void)setPackageLayer:;
- (void)setPackage:sizingTransformScale:;
- (id)appearanceChangeDelegate;
- (void)setAppearanceChangeDelegate:;
- (BOOL)flipForRTL;
- (void)setFlipForRTL:;
- (id)preferredFrame;
- (void)setPreferredFrame:;
@end
