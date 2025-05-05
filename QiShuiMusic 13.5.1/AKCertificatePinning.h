@interface AKCertificatePinning : NSObject
+ (BOOL)isValidCertificateTrust:forHostname:;
@end
