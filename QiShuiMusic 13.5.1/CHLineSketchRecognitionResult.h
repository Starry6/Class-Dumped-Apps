@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult
@property (nonatomic) NSInteger startEndpointType;
@property (nonatomic) NSInteger endEndpointType;
@property (nonatomic) {CGPoint=dd} startLocation;
@property (nonatomic) {CGPoint=dd} endLocation;
@property (nonatomic) {CGPoint=dd} midpointLocation;
@property (nonatomic) {CGPoint=dd} controlPoint;
@property (nonatomic) NSArray pathPoints;
@property (nonatomic) BOOL cornerLine;
- (id)endLocation;
- (void).cxx_destruct;
- (id)startLocation;
- (id)controlPoint;
- (int)startEndpointType;
- (int)endEndpointType;
- (id)pathPoints;
- (id)initWithString:score:rotation:startLocation:startEndpointType:endLocation:endEndpointType:midPointLocation:controlPointLocation:pathPoints:;
- (id)initWithString:score:rotation:startLocation:startEndpointType:endLocation:endEndpointType:midPointLocation:controlPointLocation:;
- (id)midpointLocation;
- (BOOL)cornerLine;
@end
