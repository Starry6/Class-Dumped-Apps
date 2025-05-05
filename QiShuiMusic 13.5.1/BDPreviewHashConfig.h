@interface BDPreviewHashConfig : NSObject
@property (nonatomic) NSString metaDataBase64String;
@property (nonatomic) NSString imagePartDataBase64String;
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) NSInteger tintBlendMode;
@property (nonatomic) double saturation;
@property (nonatomic) UIImage maskImage;
- (id)imagePartDataBase64String;
- (id)metaDataBase64String;
- (void)setImagePartDataBase64String:;
- (void)setMetaDataBase64String:;
- (void)setTintBlendMode:;
- (int)tintBlendMode;
- (id)init;
- (double)blurRadius;
- (void)setTargetSize:;
- (void)setBlurRadius:;
- (id)tintColor;
- (id)targetSize;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)setSaturation:;
- (double)saturation;
- (void)setMaskImage:;
- (id)maskImage;
@end
