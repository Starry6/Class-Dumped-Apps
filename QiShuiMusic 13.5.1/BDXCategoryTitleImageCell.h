@interface BDXCategoryTitleImageCell : BDXCategoryTitleCell
@property (nonatomic) NSString currentImageName;
@property (nonatomic) NSURL currentImageURL;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) NSLayoutConstraint imageViewWidthConstraint;
@property (nonatomic) NSLayoutConstraint imageViewHeightConstraint;
@property (nonatomic) UIImageView imageView;
- (id)currentImageName;
- (void)setCurrentImageName:;
- (void)setStackView:;
- (void)prepareForReuse;
- (id)stackView;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)imageViewWidthConstraint;
- (void)setImageViewWidthConstraint:;
- (id)imageViewHeightConstraint;
- (void)setImageViewHeightConstraint:;
- (void)reloadData:;
- (void)initializeViews;
- (id)currentImageURL;
- (void)setCurrentImageURL:;
@end
