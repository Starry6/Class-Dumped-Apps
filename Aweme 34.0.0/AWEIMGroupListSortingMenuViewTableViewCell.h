@interface AWEIMGroupListSortingMenuViewTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UIView separateLine;
- (void)configWithModel:;
- (void)__setupUI;
- (id)separateLine;
- (void)setSeparateLine:;
- (void)__updateHightLightColor:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)selectedImageView;
- (void)setSelectedImageView:;
+ (id)identifier;
@end
