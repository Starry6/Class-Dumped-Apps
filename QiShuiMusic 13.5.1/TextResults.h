@interface TextResults : NSObject
@property (nonatomic) NSMutableArray mutableCols;
@property (nonatomic) NSArray cols;
@property (nonatomic) Q colCount;
- (id)init;
- (void).cxx_destruct;
- (void)addColumn:;
- (unsigned long long)colCount;
- (id)cols;
- (void)sortCols;
- (id)transcriptionOfPath:tokenProcessingBlock:;
- (void)setCols:;
- (id)mutableCols;
- (void)setMutableCols:;
@end
