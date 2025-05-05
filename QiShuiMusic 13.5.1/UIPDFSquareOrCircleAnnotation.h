@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation
- (void)drawInContext:;
- (void)strokePath:inRect:;
- (id)initWithAnnotationDictionary:;
@end
