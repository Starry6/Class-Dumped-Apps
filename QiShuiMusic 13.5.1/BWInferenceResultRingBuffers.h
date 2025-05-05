@interface BWInferenceResultRingBuffers : NSObject
- (id)init;
- (void)dealloc;
- (void)setupRingBuffer:inferencesOfType:;
- (id)retrieveInferencesForType:beginning:until:;
- (void)bufferingStatsForType:firstOut:lastOut:countOut:;
- (void)insertInferenceResultsFromSampleBuffer:;
@end
