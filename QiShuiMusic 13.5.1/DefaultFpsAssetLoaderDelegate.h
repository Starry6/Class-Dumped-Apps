@interface DefaultFpsAssetLoaderDelegate : NSObject
@property (nonatomic) NSData certificateData;
@property (nonatomic) NSString licenseUrl;
@property (nonatomic) NSInteger appId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getlicenseFromExpressPlay:contentIdentifierHost:completion:;
- (id)initWithCertificateData:licenseUrl:appId:;
- (id)licenseUrl;
- (void)setLicenseUrl:;
- (int)appId;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (id)certificateData;
- (void)setAppId:;
- (void)setCertificateData:;
- (void).cxx_destruct;
- (BOOL)resourceLoader:shouldWaitForRenewalOfRequestedResource:;
@end
