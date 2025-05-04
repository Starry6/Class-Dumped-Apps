@interface AWEACCLocationImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentSelectedCityCode;
- (id)transformLocationWithCLLocation:encodeType:;
- (unsigned long long)locationAccessStatus;
- (void)requestPermissionWithCertName:completion:;
- (void)requestCurrentLocationWithCertName:completion:;
- (id)getCurrentLocationWithCertName:encodeType:;
- (void)reverseGeoCode:certName:completion:;
- (unsigned long long)_encodeTypeTranslate:;
- (unsigned long long)_permissionTranslate:;
- (id)currentRegion;
- (BOOL)hasPermission;
@end
