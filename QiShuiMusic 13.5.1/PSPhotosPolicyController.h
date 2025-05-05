@interface PSPhotosPolicyController : NSObject
- (void)_setPhotosStatus:specifier:;
- (id)_photosStatus:;
- (id)appSpecifierWithName:bundleID:;
- (id)appSpecifierWithName:bundleID:showPhotosAccess:showPhotosAddAccess:;
- (void)setTCCForService:appIdentifier:value:;
- (void)getAuthorizationStatesForService:allowedArray:limitedArray:deniedArray:;
@end
