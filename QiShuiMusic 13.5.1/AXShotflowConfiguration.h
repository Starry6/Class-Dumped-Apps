@interface AXShotflowConfiguration : NSObject
@property (nonatomic) NSArray filterThresholds;
@property (nonatomic) NSNumber networkThreshold;
@property (nonatomic) NSNumber nmsThreshold;
@property (nonatomic) NSArray defaultBoxesSidesNormalized;
@property (nonatomic) NSArray ratios;
- (id)initWithURL:;
- (id)filterThresholds;
- (id)ratios;
- (void).cxx_destruct;
- (id)description;
- (id)networkThreshold;
- (id)nmsThreshold;
- (id)defaultBoxesSidesNormalized;
@end
