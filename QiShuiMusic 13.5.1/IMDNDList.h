@interface IMDNDList : NSObject
@property (nonatomic) NPSManager syncManager;
- (id)init;
- (void)dealloc;
- (id)syncManager;
- (void).cxx_destruct;
- (void)setSyncManager:;
- (void)syncToPairedDeviceIncludingVersion:;
- (id)unmuteDateForIdentifier:;
- (void)muteChat:untilDate:syncToPairedDevice:;
- (void)muteChat:usingIdentifier:untilDate:syncToPairedDevice:;
- (void)_handleChatGroupIDDidChangeNotification:;
- (id)dndIdentifiersForChat:;
- (id)currentList;
- (BOOL)isMutedChat:;
- (BOOL)isMutedChatIdentifier:handleIDs:style:isSMS:;
- (id)unmuteDateForChat:;
- (void)muteChat:untilDate:;
- (void)unmuteChat:usingIdentifier:syncToPairedDevice:;
- (void)_synchronizeDNDList:syncToPairedDevice:;
- (id)groupHashForChat:;
- (id)groupHashForHandleIDs:;
- (void)_handleDNDListChanged;
- (void)_updateGroupID:toGroupID:forChat:;
+ (id)sharedList;
@end
