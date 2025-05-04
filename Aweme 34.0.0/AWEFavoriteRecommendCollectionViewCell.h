@interface AWEFavoriteRecommendCollectionViewCell : UITableViewCell
@property (nonatomic) UIView leftContentView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subLabel;
@property (nonatomic) DUXButton createButton;
@property (nonatomic) AWEFavoriteRecommendModel recommendModel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setLeftContentView:;
- (void)setRecommendModel:;
- (id)recommendModel;
- (void)clickCreateButton;
- (void)updateCoverImageViewWithModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)leftContentView;
- (void)setupUI;
- (void)updateUI;
- (id)createButton;
- (void)setSubLabel:;
- (id)subLabel;
- (void)setCreateButton:;
+ (id)identifier;
@end
