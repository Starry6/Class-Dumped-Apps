@interface TSPKMediaNotificationObserver : NSObject
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) NSMutableDictionary mutableInfo;
- (void)handleRuntimeErrorNotification:;
- (void)addNotifications;
- (id)getInfoWithDataType:;
- (void)handleAudioSessionInterruptionNotification:;
- (void)handleAudioSessionMediaServicesWereResetNotification:;
- (void)handleDidStartRunningNotification:;
- (void)handleDidStopRunningNotification:;
- (void)handleInterruptedNotification:;
- (void)handleInterruptionEndedNotification:;
- (id)init;
- (id)lock;
- (void)setup;
- (void).cxx_destruct;
- (void)setLock:;
- (void)handleAudioSessionMediaServicesWereLostNotification:;
- (id)mutableInfo;
- (void)setMutableInfo:;
+ (id)getInfoWithDataType:;
+ (id)sharedObserver;
+ (void)setup;
@end
