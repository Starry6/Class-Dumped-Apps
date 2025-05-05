@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence
@property (nonatomic) double timeInterval;
- (unsigned long long)hash;
- (double)timeInterval;
- (id)initWithTimeInterval:;
- (BOOL)isEqual:;
- (void)populateVCPVideoProcessorRequestConfiguration:;
@end
