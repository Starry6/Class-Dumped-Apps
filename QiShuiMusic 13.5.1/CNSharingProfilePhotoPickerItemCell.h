@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell
@property (nonatomic) CAShapeLayer selectionStrokeLayer;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) {CGSize=dd} originalSize;
@property (nonatomic) BOOL isSmallScreen;
@property (nonatomic) CNSharingProfilePhotoPickerItem pickerItem;
- (void)layoutSubviews;
- (void)setSelected:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)originalSize;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)imageView;
- (BOOL)isSmallScreen;
- (void)setImageView:;
- (void)setPickerItem:;
- (id)selectionBezierPath;
- (void)updateWithImage:;
- (void)setIsSmallScreen:;
- (id)pickerItem;
- (id)selectionStrokeLayer;
- (void)setSelectionStrokeLayer:;
- (void)setOriginalSize:;
+ (id)reuseIdentifier;
@end
