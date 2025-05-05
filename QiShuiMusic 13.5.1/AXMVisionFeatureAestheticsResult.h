@interface AXMVisionFeatureAestheticsResult : NSObject
@property (nonatomic) float aestheticScore;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float wellChosenBackgroundScore;
@property (nonatomic) float noiseScore;
@property (nonatomic) float failureScore;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (float)aestheticScore;
- (float)wellFramedSubjectScore;
- (float)noiseScore;
- (float)failureScore;
- (float)pleasantCompositionScore;
- (float)wellChosenBackgroundScore;
- (id)initWithVisionAestheticsObservation:;
+ (BOOL)supportsSecureCoding;
@end
