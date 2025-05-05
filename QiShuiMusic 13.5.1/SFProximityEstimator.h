@interface SFProximityEstimator : NSObject
@property (nonatomic) NSInteger estimatedRSSI;
- (int)_estimateRSSIForSFBLEDevice:;
- (int)estimatedRSSI;
- (id)description;
- (id)descriptionParams;
- (unsigned int)updateWithSFBLEDevice:;
- (id)initWithProximityInfo:;
+ (id)proximityEstimatorWithProximityInfo:;
@end
