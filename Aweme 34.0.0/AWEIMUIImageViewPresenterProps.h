@interface AWEIMUIImageViewPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) UIColor tintColor;
@property (nonatomic) NSString imageName;
@property (nonatomic) NSArray imageUrlArray;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage placeholderImage;
@property (nonatomic) double roundCornerRatio;
@property (nonatomic) @? tapAction;
- (void)setImageUrlArray:;
- (id)imageUrlArray;
- (void)setRoundCornerRatio:;
- (double)roundCornerRatio;
- (void)setTintColor:;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (id)image;
- (id)tintColor;
- (void)setImage:;
- (void)setImageName:;
- (void).cxx_destruct;
- (id)imageName;
- (id)tapAction;
- (void)setTapAction:;
@end
