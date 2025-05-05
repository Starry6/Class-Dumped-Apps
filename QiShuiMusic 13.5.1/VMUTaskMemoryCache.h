@interface VMUTaskMemoryCache : NSObject
@property (nonatomic) ^{mapped_memory_t=} memoryRegions;
@property (nonatomic) @? regionInfoBlock;
- (id)initWithTask:;
- (void)dealloc;
- (int)unmapAddress:size:;
- (int)peekAtAddress:size:returnsBuf:;
- (BOOL)taskIsTranslated;
- (id)regionInfoBlock;
- (int)readPointerAt:value:;
- (int)stopPeeking;
- (id)memoryRegions;
- (void)flushMemoryCache;
- (id)findMappedAddress:size:;
- (int)startPeeking;
- (void).cxx_destruct;
- (int)mapAddress:size:;
- (BOOL)copyRange:to:;
- (void)enumerateMemoryCache:;
- (int)mapAddress:size:returnedAddress:returnedSize:;
- (void)setRegionInfoBlock:;
+ (BOOL)taskIs64Bit:;
+ (id)taskMemoryCacheForTask:;
@end
