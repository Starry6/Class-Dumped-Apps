@interface BWMotionDataTimeMachine : NSObject
@property (nonatomic) BOOL synchronizedSlaveMotionDataCachingEnabled;
@property (nonatomic) Q earliestAvailableMotionDataSerialNumber;
@property (nonatomic) Q latestAvailableMotionDataSerialNumber;
- (void)dealloc;
- (id)initWithCapacity:synchronizedSlaveMotionDataCachingEnabled:cacheEntireMetadataDictionary:;
- (BOOL)synchronizedSlaveMotionDataCachingEnabled;
- (unsigned long long)earliestAvailableMotionDataSerialNumber;
- (unsigned long long)latestAvailableMotionDataSerialNumber;
- (unsigned long long)addMotionDataToCacheForSampleBuffer:;
- (id)copyMotionDataForSerialNumber:;
- (id)copyMotionDataForStartingSerialNumber:endingSerialNumber:;
@end
