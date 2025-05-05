@interface AXMLayoutTable : AXMLayoutItem
- (id)columns;
- (id)rows;
- (id)frame;
- (void).cxx_destruct;
- (id)header;
- (void)addColumn:;
- (id)firstLine;
- (id)normalizedFrame;
- (void)addRow:;
- (id)firstColumn;
+ (id)region:row:;
@end
