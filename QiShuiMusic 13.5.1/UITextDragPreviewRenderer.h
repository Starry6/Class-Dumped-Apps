@interface UITextDragPreviewRenderer : NSObject
@property (nonatomic) NSLayoutManager layoutManager;
@property (nonatomic) UIImage image;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} firstLineRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bodyRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastLineRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)layoutManager;
- (void)_calculate;
- (void).cxx_destruct;
- (id)image;
- (void)addRenderingAttributes:;
- (void)removeRenderingAttributes:;
- (id)firstLineRect;
- (id)bodyRect;
- (id)lastLineRect;
- (id)initWithLayoutManager:range:;
- (id)initWithLayoutManager:range:unifyRects:;
- (void)_calculateRectsUsingLayoutManager:;
- (id)_correctlyOffsetBoundingRect;
- (id)_rawBoundingRect;
- (void)adjustFirstLineRect:bodyRect:lastLineRect:textOrigin:;
@end
