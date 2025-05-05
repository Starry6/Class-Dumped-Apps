@interface UIPDFPopupAnnotation : UIPDFAnnotation
@property (nonatomic) UIPDFAnnotation parent;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} adjustedBounds;
- (void)setParent:;
- (id)init;
- (Class)viewClass;
- (id)bounds;
- (id)parent;
- (int)annotationType;
- (id)initWithAnnotationDictionary:;
- (BOOL)recognizeGestures;
- (id)adjustedBounds;
- (void)setAdjustedBounds:;
@end
