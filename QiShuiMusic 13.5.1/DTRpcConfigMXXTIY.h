@interface DTRpcConfigMXXTIY : NSObject
@property (nonatomic) NSURL gatewayURL;
@property (nonatomic) BOOL networkActivityIndicatorVisible;
@property (nonatomic) BOOL requestGZip;
@property (nonatomic) NSString operationType;
@property (nonatomic) double timeout;
@property (nonatomic) NSMutableDictionary userInfo;
- (void)setRequestGZip:;
- (id)gatewayURL;
- (BOOL)requestGZip;
- (void)setGatewayURL:;
- (id)operationType;
- (id)init;
- (id)userInfo;
- (id)copy;
- (void)setTimeout:;
- (void)setOperationType:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (double)timeout;
- (void)setNetworkActivityIndicatorVisible:;
- (BOOL)networkActivityIndicatorVisible;
@end
