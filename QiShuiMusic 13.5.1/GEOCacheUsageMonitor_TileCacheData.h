@interface GEOCacheUsageMonitor_TileCacheData : NSObject
@property (nonatomic) I count;
@property (nonatomic) I byteCount;
@property (nonatomic) NSArray errors;
- (void)setCount:;
- (id)init;
- (void).cxx_destruct;
- (id)errors;
- (unsigned int)count;
- (BOOL)wouldWrapWithByteCount:;
- (void)addErrorWithDomain:code:;
- (unsigned int)byteCount;
- (void)setByteCount:;
@end
