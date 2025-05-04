@interface AWEFavoriteRecommendTitleCollectionViewCell : UITableViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) NSString Title;
@property (nonatomic) @? closeBtnClickBlock;
- (void)setCloseBtnClickBlock:;
- (id)closeBtnClickBlock;
- (void)closeAWEFavoriteRecommendCardCell;
- (id)Title;
- (void)setCancelButton:;
- (id)icon;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitle:;
- (void)setupUI;
+ (id)identifier;
@end
