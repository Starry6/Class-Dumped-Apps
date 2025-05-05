@interface CPTable : CPChunk
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} tableBounds;
@property (nonatomic) I rowCount;
@property (nonatomic) ^d rowY;
@property (nonatomic) I columnCount;
@property (nonatomic) ^d columnX;
@property (nonatomic) I backgroundGraphicCount;
- (unsigned int)columnCount;
- (unsigned int)rowCount;
- (void)dealloc;
- (id)backgroundColor;
- (void)dispose;
- (void)finalize;
- (id)initWithBounds:;
- (void)setColumnCount:;
- (void)setRowCount:;
- (void)incrementUsedGraphicCount;
- (unsigned int)usedGraphicCount;
- (void)setBackgroundGraphics:;
- (id)backgroundGraphicAtIndex:;
- (id)tableBounds;
- (id)rowY;
- (id)columnX;
- (unsigned int)backgroundGraphicCount;
@end
