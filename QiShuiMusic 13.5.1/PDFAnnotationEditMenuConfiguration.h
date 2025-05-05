@interface PDFAnnotationEditMenuConfiguration : UIEditMenuConfiguration
@property (nonatomic) PDFAnnotation annotation;
- (void)setAnnotation:;
- (id)annotation;
- (void).cxx_destruct;
+ (id)configurationWithIdentifier:sourcePoint:;
@end
