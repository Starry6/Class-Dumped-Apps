@interface AACertificatePinner : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)connection:willSendRequestForAuthenticationChallenge:;
+ (id)sharedPinner;
+ (BOOL)isSetupServiceHost:;
+ (BOOL)isValidCertificateTrust:;
@end
