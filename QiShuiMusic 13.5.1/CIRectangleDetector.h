@interface CIRectangleDetector : CIDetector
@property (nonatomic) CIContext context;
- (void)dealloc;
- (id)context;
- (void)releaseResources;
- (void)setContext:;
- (id)initWithContext:options:;
- (id)featuresInImage:options:;
- (id)featuresInImage:;
@end
