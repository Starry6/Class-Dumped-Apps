@interface VCRateControlBandwidthEstimatorMap : NSObject
@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) I radioAccessTechnology;
@property (nonatomic) I mode;
@property (nonatomic) NSInteger bandwidthEstimationState;
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;
@property (nonatomic) VCRateControlServerBag serverBag;
- (id)serverBag;
- (void)setServerBag:;
- (id)init;
- (unsigned int)radioAccessTechnology;
- (void)dealloc;
- (unsigned int)mode;
- (void)setMode:;
- (void)setRadioAccessTechnology:;
- (void)setFastSuddenBandwidthDetectionEnabled:;
- (void)enableBWELogDump:;
- (BOOL)fastSuddenBandwidthDetectionEnabled;
- (double)estimatedBandwidth;
- (void)setEstimatedBandwidth:;
- (double)estimatedBandwidthUncapped;
- (void)setEstimatedBandwidthUncapped:;
- (int)bandwidthEstimationState;
- (id)bandwidthEstimatorWithID:isProbingSequence:isEndOfProbingSequence:;
- (void)deregisterBandwidthEstimatorWithID:;
- (double)estimatedBandwidthWithArrivalTime:;
- (double)estimatedBandwidthUncappedWithArrivalTime:;
@end
