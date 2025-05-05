@interface IESLiveMessageUplinkRequestModel : NSObject
@property (nonatomic) q routeServiceId;
@property (nonatomic) q serviceId;
@property (nonatomic) NSMutableDictionary queryParams;
@property (nonatomic) NSMutableDictionary headers;
@property (nonatomic) NSString uri;
@property (nonatomic) NSMutableDictionary customJson;
- (id)customJson;
- (long long)routeServiceId;
- (void)setCustomJson:;
- (void)setRouteServiceId:;
- (id)uri;
- (id)queryParams;
- (long long)serviceId;
- (void)setHeaders:;
- (void)setServiceId:;
- (void).cxx_destruct;
- (id)headers;
- (void)setUri:;
- (void)setQueryParams:;
@end
