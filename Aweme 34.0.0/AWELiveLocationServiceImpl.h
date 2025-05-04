@interface AWELiveLocationServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSystemPermission;
- (void)requestLocationWithPrivacyHybridCert:withContext:completion:;
- (id)currentCityCodeWithPrivacyCert:;
- (void)requestLocationWithPrivacyCert:completion:;
- (void)requestLocationNewWithPrivacyCert:completion:;
- (void)requestLocationPermissionWithPrivacyCert:auth:completion:;
- (void)requestCurrentLocationWithCert:authToken:completion:;
- (id)currentLocationWithPrivacyCert:;
- (id)currentSelectCityName;
- (id)currentSelectCityCode;
- (void)requestCurrentCityCodeWithPrivacyCert:callBack:;
@end
