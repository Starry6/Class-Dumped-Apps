@interface AWEIMImpl.StreakConversationSharedSyncedExtDataSource : AWEIMImpl.StreakBaseDataSource
- (void)iesim_chatDataManager:chatListDidUpdateWithDeletedChats:insertedChats:firstPage:reason:;
- (void)iesim_chatDataManager:totalUnreadCountUpdate:;
- (void)iesim_chatDataManager:chatDidUpdate:;
- (void)iesim_chatDataManager:chatsDidUpdate:;
- (id)init;
- (void)dealloc;
@end
