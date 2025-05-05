@interface BPSApproxPercentileDigestCentroid : NSObject
@property (nonatomic) float mean;
@property (nonatomic) I weight;
- (unsigned int)weight;
- (void)setWeight:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (float)mean;
- (void)setMean:;
- (id)initWithMeanAndWeight:weight:;
@end
