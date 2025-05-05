@interface CHSketchRecognitionResult : CHRecognitionResult
@property (nonatomic) NSString string;
@property (nonatomic) double rotation;
- (id)string;
- (void).cxx_destruct;
- (double)rotation;
- (id)initWithString:score:rotation:;
@end
