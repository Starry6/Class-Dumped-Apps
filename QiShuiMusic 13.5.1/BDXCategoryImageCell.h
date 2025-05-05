@interface BDXCategoryImageCell : BDXCategoryIndicatorCell
@property (nonatomic) NSString currentImageName;
@property (nonatomic) NSURL currentImageURL;
@property (nonatomic) UIImageView imageView;
- (id)currentImageName;
- (void)setCurrentImageName:;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)reloadData:;
- (void)initializeViews;
- (id)currentImageURL;
- (void)setCurrentImageURL:;
@end
