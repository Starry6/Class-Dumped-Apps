@interface MXSessionManagerSidekick : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSMapTable remoteDeviceIDToCoreSessionIDList;
@property (nonatomic) NSMapTable coreSessionIDToMXSessionList;
@property (nonatomic) NSRecursiveLock recursiveLock;
- (id)init;
- (void)dealloc;
- (id)serialQueue;
- (void)dumpCoreSessionList;
- (void)dumpVersionNumbersFromSidekickSessionBehavioursPlist;
- (BOOL)isSomeOtherSessionPlaying:;
- (id)copyMXCoreSessionForAudioSessionID:;
- (void)registerMXCoreSessionSidekick:;
- (void)unregisterMXCoreSessionSidekick:;
- (id)copyMXSessionList:;
- (int)postInterruptionEndedNotificationForAudioSessionID:resumable:;
- (id)remoteDeviceIDToCoreSessionIDList;
- (id)coreSessionIDToMXSessionList;
- (id)recursiveLock;
+ (id)sharedInstance;
@end
