@interface AWETeenModeItemLayoutModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageURLString;
@property (nonatomic) NSString defaultImageName;
@property (nonatomic) NSString title;
@property (nonatomic) q titleFontClass;
@property (nonatomic) double imageHeight;
@property (nonatomic) double spacing;
@property (nonatomic) q layoutType;
- (id)imageURLString;
- (void)setImageURLString:;
- (void)setTitleFontClass:;
- (long long)titleFontClass;
- (double)spacing;
- (void)setSpacing:;
- (void)setLayoutType:;
- (long long)layoutType;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)defaultImageName;
- (void)setDefaultImageName:;
- (double)imageHeight;
- (void)setImageHeight:;
@end
