@interface IESPrefetchRunningRequest : NSObject
@property (nonatomic) IESPrefetchJSNetworkRequestModel request;
@property (nonatomic) q expire;
@property (nonatomic) NSMutableArray callbacks;
- (id)init;
- (long long)expire;
- (void)setCallbacks:;
- (void)setExpire:;
- (id)callbacks;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
@end
