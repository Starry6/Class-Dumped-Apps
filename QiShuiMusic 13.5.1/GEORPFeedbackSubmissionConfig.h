@interface GEORPFeedbackSubmissionConfig : GEOServiceRequestDefaultConfig
- (unsigned long long)urlType;
- (id)dataRequestKindForRequest:traits:;
+ (id)standardConfig;
@end
