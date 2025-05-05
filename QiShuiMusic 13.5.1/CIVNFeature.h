@interface CIVNFeature : CIFeature
@property (nonatomic) float confidence;
- (float)confidence;
- (id)initWithObservation:inImage:;
@end
