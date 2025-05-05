@interface CPImageSet : NSObject
@property (nonatomic) CPImageSetAssetRegistration currentAssetRegistration;
@property (nonatomic) UIImage lightContentImage;
@property (nonatomic) UIImage darkContentImage;
- (id)initWithImage:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)image;
- (id)initWithLightContentImage:darkContentImage:;
- (id)initWithImage:treatmentBlock:;
- (void)swapStyles;
- (void)resizeImagesToSize:;
- (id)lightContentImage;
- (void)setLightContentImage:;
- (id)darkContentImage;
- (void)setDarkContentImage:;
- (id)currentAssetRegistration;
- (void)setCurrentAssetRegistration:;
+ (BOOL)supportsSecureCoding;
@end
