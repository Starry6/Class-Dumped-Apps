@interface AWEProfileExtensionAreaLandingPageEmptyCell : UICollectionViewCell
@property (nonatomic) UIView borderView;
@property (nonatomic) CAShapeLayer borderLayer;
@property (nonatomic) UILabel mainLabel;
- (void)addBorderLayerWithSize:;
- (void)refreshWithType:isEditing:borderSize:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)borderView;
- (void)setBorderView:;
- (void)setupUI;
- (id)borderLayer;
- (id)mainLabel;
- (void)setMainLabel:;
- (void)setBorderLayer:;
@end
