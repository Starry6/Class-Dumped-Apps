@interface IMCoreAutomationNotifications : NSObject
@property (nonatomic) q chatsWrittenCount;
@property (nonatomic) q messagesWrittenCount;
@property (nonatomic) q attachmentsWrittenCount;
@property (nonatomic) q recoverableMessagesWrittenCount;
- (id)init;
- (void)clearSyncCounts;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:chatsDidsync:messagesDidSync:attachmentsDidSync:recoverableMessagesDidSync:;
- (void)postCoreAutomationNotificationPeriodicSyncUpdateNotification;
- (void)postCoreAutomationNotificationWithAction:;
- (void)postCoreAutomationNotificationWithDictionary:withVerboseLogging:;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:withErrorString:;
- (void)postCoreAutomationNotificationFinishedTapToDownload:downloadedFromCloudKitSuccessfully:;
- (void)addNewChatsSyncedCount:;
- (void)addNewAttachmentsSyncedCount:;
- (void)addNewMessagesSyncedCount:;
- (void)addNewRecoverableMessagesSyncedCount:;
- (long long)chatsWrittenCount;
- (long long)messagesWrittenCount;
- (long long)attachmentsWrittenCount;
- (long long)recoverableMessagesWrittenCount;
+ (id)sharedInstance;
@end
