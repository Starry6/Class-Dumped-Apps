@interface CHEllipseRecognitionResult : CHSketchRecognitionResult
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGSize=dd} size;
- (id)center;
- (id)size;
- (id)initWithString:score:rotation:center:size:;
@end
