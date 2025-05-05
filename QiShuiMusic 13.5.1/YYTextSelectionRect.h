@interface YYTextSelectionRect : UITextSelectionRect
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) q writingDirection;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isVertical;
- (BOOL)isVertical;
- (id)rect;
- (void)setIsVertical:;
- (void)setRect:;
- (id)copyWithZone:;
- (BOOL)containsStart;
- (void)setContainsStart:;
- (BOOL)containsEnd;
- (void)setContainsEnd:;
- (long long)writingDirection;
- (void)setWritingDirection:;
@end
