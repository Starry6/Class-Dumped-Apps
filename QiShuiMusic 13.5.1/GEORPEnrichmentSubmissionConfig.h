@interface GEORPEnrichmentSubmissionConfig : GEOServiceRequestDefaultConfig
- (unsigned long long)urlType;
- (id)dataRequestKindForRequest:traits:;
- (id)appIdForNetworkEvent;
+ (id)standardConfig;
@end
