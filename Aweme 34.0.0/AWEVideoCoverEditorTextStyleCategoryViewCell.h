@interface AWEVideoCoverEditorTextStyleCategoryViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView imageSelectedView;
@property (nonatomic) UIView colorView;
@property (nonatomic) UIView colorSelectedView;
- (void)configWithItemModel:;
- (id)imageSelectedView;
- (id)colorSelectedView;
- (id)alignmentNameList;
- (id)colorNameDict;
- (void)setImageSelectedView:;
- (void)setColorSelectedView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)colorView;
- (void)setColorView:;
@end
