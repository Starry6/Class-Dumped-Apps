@interface AWEFilterBoxCategoryCell : UITableViewCell
@property (nonatomic) UILabel categoryNameLabel;
@property (nonatomic) IESCategoryModel categoryModel;
- (id)categoryModel;
- (void)setCategoryModel:;
- (id)categoryNameLabel;
- (void)setCategoryNameLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setSelected:animated:;
@end
