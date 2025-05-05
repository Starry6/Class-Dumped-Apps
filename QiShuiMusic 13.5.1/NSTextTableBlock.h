@interface NSTextTableBlock : NSTextBlock
- (id)init;
- (void)dealloc;
- (id)table;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)rectForLayoutAtPoint:inRect:textContainer:characterRange:;
- (id)boundsRectForContentRect:inRect:textContainer:characterRange:;
- (void)drawBackgroundWithFrame:inView:characterRange:layoutManager:;
- (id)initWithTable:startingRow:rowSpan:startingColumn:columnSpan:;
- (long long)startingRow;
- (long long)rowSpan;
- (long long)startingColumn;
- (long long)columnSpan;
- (void)_setRowSpan:;
- (void)_setColumnSpan:;
+ (BOOL)supportsSecureCoding;
@end
