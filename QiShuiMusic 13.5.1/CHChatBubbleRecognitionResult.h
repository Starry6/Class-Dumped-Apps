@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult
@property (nonatomic) {CGPoint=dd} stemLocation;
@property (nonatomic) double stemWidth;
- (id)stemLocation;
- (double)stemWidth;
- (id)initWithString:score:rotation:center:size:stemLocation:stemWidth:;
@end
