@interface AWEIMLocationUtils : NSObject
+ (BOOL)isValidCoord:;
+ (void)requestCurrentLocationWithBDCert:jumpCertToken:completion:;
+ (void)makeSnapShotWithLocation:completion:;
@end
