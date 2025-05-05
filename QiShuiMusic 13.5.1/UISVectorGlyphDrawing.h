@interface UISVectorGlyphDrawing : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} alignmentRect;
@property (nonatomic) {CGSize=dd} drawingSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)alignmentRect;
- (void)drawInContext:atPoint:;
- (id)drawingSize;
- (id)initWithVectorGlyph:tintColor:;
@end
