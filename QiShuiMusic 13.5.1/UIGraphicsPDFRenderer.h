@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
- (id)init;
- (BOOL)writePDFToURL:withActions:error:;
- (void)popContext:;
- (id)initWithBounds:format:;
- (id)initWithBounds:;
- (id)PDFDataWithActions:;
- (void)pushContext:;
+ (void)prepareCGContext:withRendererContext:;
+ (Class)rendererContextClass;
+ (id)contextWithFormat:;
@end
