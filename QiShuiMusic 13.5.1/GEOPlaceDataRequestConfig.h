@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig
- (unsigned long long)multipathServiceType;
- (BOOL)usesBackgroundURL;
- (id)additionalHTTPHeaders;
- (id)initWithTimeout:request:traits:;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (void).cxx_destruct;
- (double)timeout;
- (id)additionalStatesForNetworkEvent;
- (id)dataRequestKindForRequest:traits:;
@end
