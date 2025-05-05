@interface MobileGestaltHelperProxy : NSObject
@property (nonatomic) NSInteger error;
@property (nonatomic) <MobileGestaltHelper> helper;
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)helper;
- (void)setError:;
- (int)error;
- (BOOL)proxyRebuildCache;
- (id)connection;
- (void)invalidate;
- (BOOL)proxySetCacheSentinel;
+ (id)proxy;
@end
