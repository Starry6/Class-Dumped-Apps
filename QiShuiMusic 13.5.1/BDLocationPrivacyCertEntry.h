@interface BDLocationPrivacyCertEntry : BDPrivacyCertEntry
+ (void)requestLocationWithManager:privacyCert:error:;
+ (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:manager:privacyCert:completion:;
+ (void)requestWhenInUseAuthorizationWithManager:privacyCert:error:;
+ (void)startUpdateLocationWithManager:privacyCert:error:;
@end
