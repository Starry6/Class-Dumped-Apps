@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)multipathServiceType;
- (BOOL)usesBackgroundURL;
- (id)additionalHTTPHeaders;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (void).cxx_destruct;
- (id)additionalStatesForNetworkEvent;
- (id)dataRequestKindForRequest:traits:;
- (id)additionalURLQueryItems;
- (id)initWithRequest:requestPriority:;
@end
