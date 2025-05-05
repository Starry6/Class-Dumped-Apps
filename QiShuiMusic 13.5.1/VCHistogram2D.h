@interface VCHistogram2D : VCHistogram
- (void)dealloc;
- (void)reset;
- (id)description;
- (id)initWithType:bucketValues:;
- (void)addValue:withArray:;
@end
