@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation
- (void)drawInContext:;
- (void)drawLayer:inContext:;
- (Class)viewClass;
- (int)annotationType;
- (BOOL)recognizeGestures;
- (void)drawLayerUpright:inContext:selection:rectangles:;
- (void)drawLayerRotated:inContext:selection:rectangles:;
@end
