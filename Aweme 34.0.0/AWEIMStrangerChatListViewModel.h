@interface AWEIMStrangerChatListViewModel : AWEIMStrangerChatListBaseViewModel
@property (nonatomic) q trueStrangerUnread;
@property (nonatomic) q fakeStrangerUnread;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreDataWithCompletion:;
- (id)extDict;
- (void)setExtDict:;
- (void)setupKVO;
- (id)trackerTabName;
- (id)weakVC;
- (void)setWeakVC:;
- (void)strangerConversationCountAfterDate:completion:;
- (void)strangerMessageCountAfterDate:completion:;
- (void)setChatList:;
- (void)didReloadAllStrangerDataEnd;
- (BOOL)isTrashStrangerBox;
- (void)fakeStrangerUnreadDidChange:;
- (void)didEndNotify;
- (void)didMergeReloadALLChatList:olderChatList:withExtDict:;
- (void)didReloadChatList:withExtDict:scene:;
- (void)didDeleteChatList:scene:;
- (void)didInsertChat:atIndex:withExt:scene:;
- (void)configWithDataManager:;
- (void)loadFirstPageWithCompletion:;
- (id)getBizInfo;
- (void)setTrueStrangerUnread:;
- (long long)trueStrangerUnread;
- (long long)fakeStrangerUnread;
- (void)setFakeStrangerUnread:;
- (void)didReloadALLChatList:withExtDict:scene:;
- (id)actionDelegate;
- (id)dataManager;
- (id)chatList;
- (BOOL)hasMore;
- (void)setDataManager:;
- (void).cxx_destruct;
- (void)setActionDelegate:;
@end
