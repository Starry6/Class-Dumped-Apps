@interface CPTableCell : CPChunk
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cellBounds;
@property (nonatomic) {?=qq} rowSpan;
@property (nonatomic) {?=qq} columnSpan;
@property (nonatomic) I backgroundGraphicCount;
- (void)dealloc;
- (id)backgroundColor;
- (void)dispose;
- (void)finalize;
- (id)initWithBounds:;
- (id)rowSpan;
- (id)columnSpan;
- (void)setRowSpan:;
- (void)setBackgroundGraphics:;
- (id)backgroundGraphicAtIndex:;
- (unsigned int)backgroundGraphicCount;
- (void)setBorder:bounds:graphics:;
- (id)boundsOfBorder:;
- (id)colorOfBorder:;
- (unsigned int)graphicCountOfBorder:;
- (id)graphicObjectOfBorder:atIndex:;
- (long long)compareCellOrdinal:;
- (id)cellBounds;
- (void)setColumnSpan:;
@end
