@interface NWNetworkPredictions : NSObject
@property (nonatomic) NSDate changePointAt;
@property (nonatomic) q toQuality;
@property (nonatomic) double confidence;
@property (nonatomic) q resolutionSeconds;
- (double)confidence;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)changePointAt;
- (long long)toQuality;
- (long long)resolutionSeconds;
+ (BOOL)supportsSecureCoding;
@end
