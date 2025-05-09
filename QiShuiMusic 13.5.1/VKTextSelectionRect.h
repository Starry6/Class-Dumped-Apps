@interface VKTextSelectionRect : VKBaseTextSelectionRect
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) q writingDirection;
@property (nonatomic) UIBezierPath _path;
@property (nonatomic) VKTextSelectionRectCustomHandleInfo _customHandleInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSString _transcript;
@property (nonatomic) VKQuad quad;
- (id)_path;
- (id)rect;
- (id)summaryDescription;
- (void)setRect:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsPoint:;
- (id)quad;
- (BOOL)containsStart;
- (void)setContainsStart:;
- (BOOL)containsEnd;
- (void)setContainsEnd:;
- (long long)writingDirection;
- (id)_customHandleInfo;
- (void)setWritingDirection:;
- (id)initWithRect:containsStart:containsEnd:writingDirection:quad:;
- (id)handleInfoForQuad:origin:;
- (void)set_path:;
- (void)set_customHandleInfo:;
- (id)_transcript;
- (void)set_transcript:;
@end
