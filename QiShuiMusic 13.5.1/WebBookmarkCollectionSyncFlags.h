@interface WebBookmarkCollectionSyncFlags : NSObject
@property (nonatomic) BOOL syncAllowed;
@property (nonatomic) NSInteger syncLockFileDescriptor;
@property (nonatomic) q syncNotificationType;
@property (nonatomic) BOOL postSyncNotificationWhenUnlocking;
@property (nonatomic) NSMutableSet lockSyncHoldRequestorPointers;
@property (nonatomic) BOOL unlockSyncRequested;
- (long long)syncNotificationType;
- (id)lockSyncHoldRequestorPointers;
- (BOOL)syncAllowed;
- (id)initWithSyncAllowed:;
- (BOOL)postSyncNotificationWhenUnlocking;
- (void)setPostSyncNotificationWhenUnlocking:;
- (BOOL)unlockSyncRequested;
- (void).cxx_destruct;
- (void)setUnlockSyncRequested:;
- (void)setSyncNotificationType:;
- (void)setSyncLockFileDescriptor:;
- (int)syncLockFileDescriptor;
@end
