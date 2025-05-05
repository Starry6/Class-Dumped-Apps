@interface PKStrokeSelectionImage : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage combinedImage;
@property (nonatomic) PKStrokeSelectionImageConfig config;
@property (nonatomic) PKStrokeSelectionImageConfig fullSizeConfig;
@property (nonatomic) UIImage addImage;
@property (nonatomic) UIImage mulImage;
- (void)setImage:;
- (void).cxx_destruct;
- (id)config;
- (id)image;
- (id)copyWithZone:;
- (id)addImage;
- (id)combinedImage;
- (void)setAddImage:;
- (void)setMulImage:;
- (id)mulImage;
- (id)initWithImage:config:fullSizeConfig:;
- (id)fullSizeConfig;
@end
