@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult
@property (nonatomic) {CGPoint=dd} upperLeftPoint;
@property (nonatomic) {CGPoint=dd} upperRightPoint;
@property (nonatomic) {CGPoint=dd} lowerLeftPoint;
@property (nonatomic) {CGPoint=dd} lowerRightPoint;
@property (nonatomic) {CGSize=dd} size;
- (id)size;
- (id)upperLeftPoint;
- (id)upperRightPoint;
- (id)lowerLeftPoint;
- (id)lowerRightPoint;
- (id)initWithString:score:rotation:upperLeftPoint:upperRightPoint:lowerLeftPoint:lowerRightPoint:size:;
@end
