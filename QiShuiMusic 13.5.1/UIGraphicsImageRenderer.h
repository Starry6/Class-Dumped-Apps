@interface UIGraphicsImageRenderer : UIGraphicsRenderer
- (id)PNGDataWithActions:;
- (id)init;
- (void)_prepareContextForReuse:;
- (id)initWithSize:;
- (id)imageWithActions:;
- (id)initWithBounds:format:;
- (id)initWithBounds:;
- (id)initWithSize:format:;
- (void)pushContext:;
- (BOOL)allowsImageOutput;
- (id)JPEGDataWithCompressionQuality:actions:;
+ (void)prepareCGContext:withRendererContext:;
+ (Class)rendererContextClass;
+ (id)contextWithFormat:;
@end
