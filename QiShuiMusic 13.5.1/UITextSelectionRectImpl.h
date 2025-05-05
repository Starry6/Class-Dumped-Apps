@interface UITextSelectionRectImpl : UITextSelectionRect
@property (nonatomic) WebSelectionRect webRect;
- (BOOL)isVertical;
- (id)rect;
- (id)range;
- (void).cxx_destruct;
- (BOOL)containsStart;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (id)initWithWebRect:;
- (id)webRect;
- (void)setWebRect:;
+ (id)rectWithWebRect:;
+ (id)rectsWithWebRects:;
@end
