@interface GEOGeocodeRequestConfig : GEOServiceRequestDefaultConfig
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (id)dataRequestKindForRequest:traits:;
+ (id)standardConfig;
@end
