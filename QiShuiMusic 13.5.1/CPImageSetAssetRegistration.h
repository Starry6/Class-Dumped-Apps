@interface CPImageSetAssetRegistration : NSObject
@property (nonatomic) UITraitCollection baseTraitCollection;
@property (nonatomic) UITraitCollection lightTraitCollection;
@property (nonatomic) UITraitCollection darkTraitCollection;
@property (nonatomic) UIImage combinedImage;
- (void)dealloc;
- (void).cxx_destruct;
- (id)combinedImage;
- (id)initWithLightImage:darkImage:baseTraitCollection:;
- (id)baseTraitCollection;
- (id)lightTraitCollection;
- (id)darkTraitCollection;
@end
