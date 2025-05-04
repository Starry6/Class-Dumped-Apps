@interface AWETeenMoreSheetAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString cachedImageName;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) UIImage image;
@property (nonatomic) UIColor imageColor;
@property (nonatomic) @? handler;
- (void)setCachedImageName:;
- (id)cachedImageName;
- (void)setHandler:;
- (id)titleColor;
- (id)image;
- (void)setImage:;
- (void)setTitleColor:;
- (void)setImageColor:;
- (id)handler;
- (void).cxx_destruct;
- (id)title;
- (id)imageColor;
- (void)setTitle:;
+ (id)actionWithTitle:titleColor:image:imageColor:handler:;
+ (id)actionWithTitle:titleColor:cachedImageName:imageColor:handler:;
+ (id)actionWithTitle:image:handler:;
@end
