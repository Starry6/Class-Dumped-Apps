@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray imageViewConstraints;
- (id)initWithImage:;
- (void)setImage:;
- (void)setImage:animated:;
- (void).cxx_destruct;
- (id)imageView;
- (id)image;
- (id)imageViewConstraints;
- (void)setImageViewConstraints:;
- (void)addToStackView:context:;
- (void)addToConstraints:context:;
+ (id)_imageViewWithImage:;
@end
