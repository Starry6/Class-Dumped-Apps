@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGPoint=dd} controlPoint;
- (id)center;
- (id)size;
- (id)controlPoint;
- (id)initWithString:score:rotation:center:size:controlPointLocation:;
@end
