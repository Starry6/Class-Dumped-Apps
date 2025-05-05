@interface CITextDetector : CIDetector
@property (nonatomic) CIContext context;
- (void)dealloc;
- (id)context;
- (void)setContext:;
- (id)initWithContext:options:;
- (id)featuresInImage:options:;
- (id)featuresInImage:;
- (id)ctmForImageWithBounds:orientation:;
- (id)adjustedImageFromImage:orientation:inverseCTM:;
@end
