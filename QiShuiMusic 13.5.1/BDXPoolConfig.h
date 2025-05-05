@interface BDXPoolConfig : NSObject
@property (nonatomic) @? customIdentifierBlock;
@property (nonatomic) Q maxCacheCount;
@property (nonatomic) BOOL clearOnMemoryWarning;
- (BOOL)clearOnMemoryWarning;
- (id)customIdentifierBlock;
- (unsigned long long)maxCacheCount;
- (void)setClearOnMemoryWarning:;
- (void)setCustomIdentifierBlock:;
- (void)setMaxCacheCount:;
- (id)init;
- (void).cxx_destruct;
@end
