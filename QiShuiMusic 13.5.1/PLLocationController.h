@interface PLLocationController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (id)init;
- (void)dealloc;
- (id)location;
- (void)locationManager:didUpdateLocations:;
- (void)setEnabled:;
- (void)setHeadingEnabled:;
- (void).cxx_destruct;
- (id)locationString;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_applicationStateChanged:;
- (void)_assetContainerChanged:;
- (void)_updateLocationRunState;
- (id)locationDictionaryForImageWithDeviceOrientation:rearFacingCamera:;
- (BOOL)_addLocationToAsset:;
- (void)addLocationToMediaWithAssetURLWhenAvailable:deviceOrientation:cameraWasRearFacing:;
- (void)_updatePendingAssets;
+ (id)sharedInstance;
+ (BOOL)usesEffectiveBundleIdentifier;
+ (void)setUsesEffectiveBundleIdentifier:;
@end
