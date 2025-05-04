@interface AWESearchSynthesisNovelLoadingContentView : UIView
@property (nonatomic) UIImageView image1;
@property (nonatomic) UIImageView image2;
@property (nonatomic) UIImageView maskImage;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) UIImage loadImage;
@property (nonatomic) UIImage darkLoadImage;
- (id)image1;
- (void)setImage1:;
- (void)setLoadImage:;
- (void)setDarkLoadImage:;
- (id)darkLoadImage;
- (id)initWithFrame:;
- (void)startAnimation;
- (id)loadImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (id)maskImage;
- (void)setMaskImage:;
- (id)image2;
- (void)setImage2:;
- (BOOL)darkMode;
- (void)setDarkMode:;
- (void)setUpLayers;
@end
