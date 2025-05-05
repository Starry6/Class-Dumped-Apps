@interface BWBufferometer : NSObject
+ (void)trackBuffer:trackedSize:;
+ (void)trackBuffer:trackedSize:tag:bufferType:;
+ (long long)totalTrackedSizeInFlight;
+ (long long)totalTrackedBuffersInFlight;
@end
