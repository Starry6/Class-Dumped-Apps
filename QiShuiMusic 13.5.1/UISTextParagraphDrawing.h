@interface UISTextParagraphDrawing : NSObject
@property (nonatomic) C lineCount;
@property (nonatomic) {CGSize=dd} drawingSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} alignmentRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned char)lineCount;
- (id)alignmentRect;
- (void)drawInContext:atPoint:;
- (id)drawingSize;
- (id)initWithString:attributes:size:numberOfLines:scale:;
@end
