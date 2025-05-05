@interface AMSFraudReport : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createBagForSubProfile;
+ (id)_signatureForRequest:signingKeyRef:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)handleResponse:account:bag:;
+ (BOOL)isFeatureSupportedForBag:;
+ (void)_performCallbackWithURL:headers:bag:;
+ (BOOL)_containsFraudReportHeaders:;
+ (id)_handleCallbackFraudReportResponse:account:bag:;
+ (BOOL)_isCallbackFraudReportStatusCode:;
+ (id)_determineFallbackAccountForProvidedAccount:;
+ (BOOL)_isFraudReportStatusCode:;
+ (id)_handleFraudReportResponse:account:bag:;
+ (id)addDeviceIdentityCertificateAndSignatureToRequest:parameters:bag:;
+ (id)bagKeySet;
+ (BOOL)_containsCallbackFraudReportHeaders:;
@end
