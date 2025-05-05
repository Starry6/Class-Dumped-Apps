@interface CPRMTableCell : NSObject
@property (nonatomic) ^{CGPDFPage=} page;
@property (nonatomic) CPRMTableCell nextCellInColumn;
@property (nonatomic) CPRMTableCell nextCellInRow;
@property (nonatomic) CPRMTable table;
@property (nonatomic) ^{CGPDFNode=} tableCellNode;
- (id)page;
- (void)dealloc;
- (id)contents;
- (void)setTable:;
- (id)backgroundColor;
- (id)table;
- (unsigned long long)row;
- (id)bounds;
- (unsigned long long)column;
- (id)nextCellInColumn;
- (void)setNextCellInColumn:;
- (id)nextCellInRow;
- (void)setNextCellInRow:;
- (id)tableCellNode;
- (void)setTableCellNode:;
@end
