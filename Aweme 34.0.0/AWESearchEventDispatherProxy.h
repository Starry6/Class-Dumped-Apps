@interface AWESearchEventDispatherProxy : NSObject
@property (nonatomic) NSHashTable broadcasters;
@property (nonatomic) NSHashTable receivers;
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSArray broadcastList;
@property (nonatomic) NSArray receiveList;
- (void)addBroadcaster:;
- (void)removeBroadcaster:;
- (id)broadcastList;
- (id)receiveList;
- (id)broadcasters;
- (void)setBroadcasters:;
- (void)setProtocol:;
- (id)protocol;
- (id)receivers;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
- (void)removeReceiver:;
- (void)addReceiver:;
- (void)setReceivers:;
+ (BOOL)fixReturnValue;
@end
