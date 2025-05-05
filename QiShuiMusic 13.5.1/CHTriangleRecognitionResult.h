@interface CHTriangleRecognitionResult : CHSketchRecognitionResult
@property (nonatomic) {CGPoint=dd} vertex1;
@property (nonatomic) {CGPoint=dd} vertex2;
@property (nonatomic) {CGPoint=dd} vertex3;
- (id)vertex1;
- (id)vertex2;
- (id)vertex3;
- (id)initWithString:score:rotation:vertex1:vertex2:vertex3:;
@end
