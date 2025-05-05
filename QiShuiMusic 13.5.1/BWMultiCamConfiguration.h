@interface BWMultiCamConfiguration : NSObject
- (void)dealloc;
- (id)multiCamConfigurationForDevice:errorOut:;
- (id)copyActiveSynchronizedStreamsGroupsForDevice:errorOut:;
- (BOOL)isEqual:;
+ (id)configurationWithUnsynchronizedActiveStreamsPortTypes:synchronizedActiveStreamsGroupsPortTypes:;
+ (id)configurationWithCurrentStateFromCaptureDevice:;
@end
