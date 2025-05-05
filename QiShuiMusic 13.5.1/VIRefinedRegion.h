@interface VIRefinedRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)regionOfInterest;
- (id)initWithRegionOfInterest:confidence:;
@end
