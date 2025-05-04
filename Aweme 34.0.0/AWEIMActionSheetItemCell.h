@interface AWEIMActionSheetItemCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMActionSheetItemModel itemModel;
@property (nonatomic) UIView highlightMaskView;
- (void)awe_themeDidChange:;
- (id)itemModel;
- (void)setItemModel:;
- (void)setHighlightMaskView:;
- (id)highlightMaskView;
- (void)layoutWithItemModel:itemArray:;
- (void)setupBindingWithFunctionModel:;
- (void)setupImageWithIconName:;
- (void)configWith:itemArray:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)iconView;
- (void)setHighlighted:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
