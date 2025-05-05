@interface TextColumn : NSObject
@property (nonatomic) NSMutableArray mutableRows;
@property (nonatomic) NSArray rows;
@property (nonatomic) Q rowCount;
- (unsigned long long)rowCount;
- (id)init;
- (id)rows;
- (void).cxx_destruct;
- (id)initWithRows:;
- (void)addRow:;
- (void)sortRowsInAscendingOrder;
- (id)mutableRows;
- (void)setMutableRows:;
@end
