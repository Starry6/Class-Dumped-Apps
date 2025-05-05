@interface PLCacheMetricsCollectorServer : NSObject
- (void)dealloc;
- (id)getSharedImageRequestCacheMetrics;
- (id)initWithXPCObject:;
@end
