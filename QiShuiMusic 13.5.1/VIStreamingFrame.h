@interface VIStreamingFrame : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) <VIImageContent> imageContent;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedRegionOfInterest;
@property (nonatomic) double stabilityScore;
- (void).cxx_destruct;
- (double)timestamp;
- (double)stabilityScore;
- (id)initWithTimeStamp:imageContent:normalizedRegionOfInterest:stabilityScore:;
- (id)imageContent;
- (id)normalizedRegionOfInterest;
@end
