@interface CIVNFaceDetector : CIDetector
@property (nonatomic) CIContext context;
- (void)dealloc;
- (id)context;
- (id)initWithContext:options:;
- (id)featuresInImage:options:;
@end
