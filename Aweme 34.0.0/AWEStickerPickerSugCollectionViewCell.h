@interface AWEStickerPickerSugCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView lensImageView;
@property (nonatomic) NSString title;
- (id)lensImageView;
- (void)setLensImageView:;
- (void)configCellWithModel:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setupSubviews;
+ (id)identifier;
@end
