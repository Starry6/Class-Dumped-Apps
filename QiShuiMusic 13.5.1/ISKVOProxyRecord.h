@interface ISKVOProxyRecord : NSObject
@property (nonatomic) ISKVOProxy proxy;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)proxy;
- (void).cxx_destruct;
- (id)queue;
- (id)initWithProxy:queue:;
@end
