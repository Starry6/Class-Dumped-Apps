@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect
- (id)annotation;
- (void)drawInContext:;
- (void)update;
- (id)UUID;
- (id)pageFrame;
@end
