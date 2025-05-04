@interface AWESECRouteEventMerge : NSObject
@property (nonatomic) SECRouteTrace buffer;
@property (nonatomic) BOOL cacheHasDelivered;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearTrace;
- (void)loadTracesFromDisk;
- (void)_handleTrafficEvent:;
- (void)_handleWebTraceEvent:;
- (void)_handleWebSecLinkEvent:;
- (void)saveTrace:;
- (void)_consumeCacheCompareTo:;
- (void)saveTraces:;
- (void)setCacheHasDelivered:;
- (id)_loadCachedTrace;
- (BOOL)cacheHasDelivered;
- (id)buffer;
- (void)setBuffer:;
- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:;
- (id)subscriberId;
@end
