@interface PDFTextSelectionRect : UITextSelectionRect
- (BOOL)isVertical;
- (id)rect;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsStart;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (id)initWithRect:onPage:;
- (void)setIsStartingRect:;
- (void)setIsEndingRect:;
@end
