@interface PFZlibDataCompressionOptions : NSObject
@property (nonatomic) NSInteger compressionLevel;
@property (nonatomic) NSInteger strategy;
@property (nonatomic) NSInteger windowBits;
@property (nonatomic) NSInteger memoryLevel;
@property (nonatomic) NSInteger chunkSize;
- (int)strategy;
- (void)setStrategy:;
- (void)setCompressionLevel:;
- (void)setCompressionStrategy:;
- (int)compressionLevel;
- (int)windowBits;
- (void)setWindowBits:;
- (int)memoryLevel;
- (void)setMemoryLevel:;
- (int)chunkSize;
- (void)setChunkSize:;
+ (id)defaultOptions;
@end
