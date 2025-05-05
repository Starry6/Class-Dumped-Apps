@interface TTZstdManager : NSObject
@property (nonatomic) @? ttZstdCompressBlock;
@property (nonatomic) @? ttZstdDeCompressBlock;
- (id)initWithZtsdBlock:ttZstdDeCompressBlock:;
- (void)setTtZstdCompressBlock:;
- (void)setTtZstdDeCompressBlock:;
- (id)ttZstdCompressBlock;
- (id)ttZstdDeCompressBlock;
- (void).cxx_destruct;
@end
