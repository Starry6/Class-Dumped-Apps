@interface PFZlibDataDecompressionOptions : NSObject
@property (nonatomic) NSInteger windowBits;
@property (nonatomic) @? createBuffer;
@property (nonatomic) @? growData;
@property (nonatomic) BOOL decompressAllAtOnce;
- (void).cxx_destruct;
- (int)windowBits;
- (void)setWindowBits:;
- (void)setCreateBuffer:;
- (void)setGrowData:;
- (id)createBuffer;
- (id)growData;
- (BOOL)decompressAllAtOnce;
- (void)setDecompressAllAtOnce:;
+ (id)defaultOptions;
@end
