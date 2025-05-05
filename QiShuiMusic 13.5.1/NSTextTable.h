@interface NSTextTable : NSTextBlock
- (id)init;
- (void)dealloc;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)_tableFlags;
- (void)_takeValuesFromTextBlock:;
- (BOOL)collapsesBorders;
- (void)setCollapsesBorders:;
- (BOOL)hidesEmptyCells;
- (void)setHidesEmptyCells:;
- (unsigned long long)layoutAlgorithm;
- (void)setLayoutAlgorithm:;
- (void)_setTableFlags:;
- (id)_rowArrayForBlock:atIndex:text:layoutManager:containerWidth:withRepetitions:collapseBorders:rowCharRange:indexInRow:startingRow:startingColumn:previousRowBlockHelper:;
- (id)_descriptionAtIndex:text:;
- (id)rectForBlock:layoutAtPoint:inRect:textContainer:characterRange:;
- (id)_contentRectForCharRange:textContainer:;
- (id)boundsRectForBlock:contentRect:inRect:textContainer:characterRange:;
- (BOOL)_missingColumnsForRowRange:blockIndex:text:;
- (void)drawBackgroundForBlock:withFrame:inView:characterRange:layoutManager:;
+ (BOOL)supportsSecureCoding;
@end
