@interface MPProtocolProxy : NSProxy
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSHashTable objects;
- (id)protocol;
- (void)setProtocol:;
- (id)methodSignatureForSelector:;
- (void)setObjects:;
- (id)objects;
- (void).cxx_destruct;
- (void)forwardInvocation:;
+ (id)proxyForObjects:protocol:;
+ (id)proxyForObject:protocol:;
@end
