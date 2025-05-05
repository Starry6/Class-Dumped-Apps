@interface AMapResourceReader : NSObject
@property (nonatomic) NSMutableDictionary bundles;
@property (nonatomic) NSCache imageCache;
- (id)bundleWithName:;
- (void)bundleInvalidNotification:;
- (id)imageNamed:type:inBundle:;
- (id)registerBundleWithPath:bundleName:;
- (void)setBundles:;
- (id)imageCache;
- (void)setImageCache:;
- (void).cxx_destruct;
- (id)imageNamed:inBundle:;
- (id)bundles;
+ (id)HUDLogoImage;
+ (id)publicKeyString;
+ (id)HUDLogoString;
+ (id)embeddedImageWithSourceString:;
+ (id)httpsCertificateData;
+ (id)httpsCertificateString;
+ (id)mapLogoImage;
+ (id)mapLogoString;
+ (id)sharedResourceReader;
+ (id)sigPublicKeyData;
+ (id)sigPublicKeyString;
+ (id)publicKeyData;
@end
