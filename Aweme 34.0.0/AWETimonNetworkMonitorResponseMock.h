@interface AWETimonNetworkMonitorResponseMock : NSObject
@property (nonatomic) NSString params;
@property (nonatomic) NSDictionary passThroughInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tm_net_aspectType;
- (id)tm_net_url;
- (id)tm_net_allHTTPHeaderFields;
- (id)tm_net_valueForHTTPHeaderField:;
- (id)tm_net_passThroughInfo;
- (void)tm_net_setPassThroughInfo:;
- (id)tm_net_request;
- (long long)tm_net_statusCode;
- (id)tm_net_MIMEType;
- (id)tm_net_responseData;
- (void)tm_net_setResponseData:;
- (id)tm_net_responseError;
- (void)tm_net_setResponseError:;
- (id)passThroughInfo;
- (void)setPassThroughInfo:;
- (void).cxx_destruct;
- (id)params;
- (id)initWithMonitor:;
- (void)setParams:;
@end
