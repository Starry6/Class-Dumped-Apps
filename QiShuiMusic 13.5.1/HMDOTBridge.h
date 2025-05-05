@interface HMDOTBridge : NSObject
@property (nonatomic) BOOL enableBinding;
@property (nonatomic) NSMutableDictionary cachedTraces;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQeueue;
- (id)traceByTraceID:;
- (id)cachedTraces;
- (id)callbackQeueue;
- (BOOL)enableBinding;
- (void)enableTraceBinding:;
- (void)registerTrace:forTraceID:;
- (void)removeTraceID:;
- (void)setCachedTraces:;
- (void)setCallbackQeueue:;
- (void)setEnableBinding:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
