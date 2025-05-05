@interface UAServiceLogReport : UAService
- (void)accessServiceWithData:results:completion:;
- (id)serviceRequest;
- (BOOL)shouldAccessServiceGateway;
+ (id)URLWithDomainConfig:;
+ (id)necessaryBodyHeadFieldKeys;
+ (id)necessaryLogReportKeys;
+ (id)necessaryRequestHeadKeys;
+ (id)URL;
@end
