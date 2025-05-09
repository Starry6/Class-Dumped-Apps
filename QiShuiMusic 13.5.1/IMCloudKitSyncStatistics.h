@interface IMCloudKitSyncStatistics : NSObject
@property (nonatomic) Q syncedChatCount;
@property (nonatomic) Q totalChatCount;
@property (nonatomic) Q syncedAttachmentCount;
@property (nonatomic) Q totalAttachmentCount;
@property (nonatomic) Q syncedMessageCount;
@property (nonatomic) Q totalMessageCount;
@property (nonatomic) Q totalRecordCount;
@property (nonatomic) Q syncedRecordCount;
@property (nonatomic) double percentSynced;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithStatisticsDictionary:;
- (double)percentSynced;
- (id)_statsString:count:total:;
- (unsigned long long)syncedChatCount;
- (void)setSyncedChatCount:;
- (unsigned long long)totalChatCount;
- (void)setTotalChatCount:;
- (unsigned long long)syncedAttachmentCount;
- (void)setSyncedAttachmentCount:;
- (unsigned long long)totalAttachmentCount;
- (void)setTotalAttachmentCount:;
- (unsigned long long)syncedMessageCount;
- (void)setSyncedMessageCount:;
- (unsigned long long)totalMessageCount;
- (void)setTotalMessageCount:;
- (unsigned long long)totalRecordCount;
- (void)setTotalRecordCount:;
- (unsigned long long)syncedRecordCount;
- (void)setSyncedRecordCount:;
- (id)_syncStatisticsDictionary;
+ (double)calculatePercentageOfTotal:count:;
+ (id)percentStringFromDouble:;
+ (id)percentStringFromTotal:count:;
+ (id)_createSyncStatisticsDictionary:messageSyncCount:chatCount:chatSyncCount:attachmentCount:attachmentSyncCount:;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:syncType:count:max:;
@end
