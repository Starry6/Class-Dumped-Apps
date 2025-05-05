@interface UAServiceGetPhone : UAService
- (void)accessServiceWithData:results:completion:;
- (void)finishServiceWithResult:;
- (void)serviceNetworkDisposedRedirectionResponse:;
- (id)serviceRequest;
- (BOOL)shouldAccessServiceGateway;
+ (id)URLWithDomainConfig:;
+ (id)decodeResultData:withKey:withFuncType:;
+ (id)defendEOFKeys;
+ (id)necessaryRequestBodyKeys;
+ (id)necessaryRequestHeadKeys;
+ (id)phoneScripCacheKeys;
+ (id)URL;
@end
