@interface GEORPFeedbackLookupConfig : GEOServiceRequestDefaultConfig
- (unsigned long long)urlType;
- (double)timeout;
- (id)dataRequestKindForRequest:traits:;
+ (id)standardConfig;
@end
