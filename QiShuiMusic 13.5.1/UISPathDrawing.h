@interface UISPathDrawing : NSObject
@property (nonatomic) {CGSize=dd} drawingSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} alignmentRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)alignmentRect;
- (id)initWithRectSize:fillColor:;
- (void)drawInContext:atPoint:;
- (id)drawingSize;
- (id)initWithType:path:size:fillColor:;
- (id)initWithEllipseSize:fillColor:;
- (id)initWithPath:size:fillColor:;
- (id)initWithRoundedRectSize:cornerRadii:fillColor:;
@end
