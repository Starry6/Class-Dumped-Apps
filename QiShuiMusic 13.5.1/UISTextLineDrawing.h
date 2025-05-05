@interface UISTextLineDrawing : NSObject
@property (nonatomic) BOOL hasLineBreak;
@property (nonatomic) {CGSize=dd} drawingSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} alignmentRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)alignmentRect;
- (void)drawInContext:atPoint:;
- (id)drawingSize;
- (id)initWithNonretainedLine:lineBreakMode:textAlignment:width:scale:;
- (id)initWithString:attributes:lineBreakMode:textAlignment:width:scale:;
- (id)initWithAttributedString:lineBreakMode:textAlignment:width:scale:;
- (BOOL)hasLineBreak;
@end
