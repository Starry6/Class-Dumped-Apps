@interface FigNSURLSession : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) <NSURLSessionDataDelegate> dataDelegate;
@property (nonatomic) NSOperationQueue opQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) NSString clientPersonaIdentifier;
@property (nonatomic) q doomTime;
@property (nonatomic) BOOL doomCheckScheduled;
@property (nonatomic) NSInteger assertionCount;
- (id)clientBundleIdentifier;
- (void)dealloc;
- (void)debug;
- (id)dispatchQueue;
- (BOOL)doomCheckScheduled;
- (id)acquireAssertion;
- (id)dataDelegate;
- (id)initWithClientBundleIdentifier:clientPersonaIdentifier:dispatchQueue:;
- (id)opQueue;
- (void)setAssertionCount:;
- (id)session;
- (void)setDoomTime:;
- (int)assertionCount;
- (id)clientPersonaIdentifier;
- (void)setDoomCheckScheduled:;
- (long long)doomTime;
@end
