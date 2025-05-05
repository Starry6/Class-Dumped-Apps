@interface CPAnnotation : CPGraphicObject
@property (nonatomic) ^{CGPDFAnnotation=} cgAnnotation;
- (void)dealloc;
- (id)initWithCGPDFAnnotation:;
- (id)cgAnnotation;
- (void)setCgAnnotation:;
@end
