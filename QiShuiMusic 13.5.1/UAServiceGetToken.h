@interface UAServiceGetToken : UAService
- (void)accessServiceWithData:results:completion:;
- (id)serviceRequest;
- (BOOL)shouldAccessServiceGateway;
+ (id)URLWithDomainConfig:;
+ (id)necessaryRequestBodyKeys;
+ (id)necessaryRequestHeadKeys;
+ (id)URL;
@end
