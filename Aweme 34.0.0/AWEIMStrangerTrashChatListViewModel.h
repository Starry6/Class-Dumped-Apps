@interface AWEIMStrangerTrashChatListViewModel : AWEIMStrangerChatListBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreDataWithCompletion:;
- (id)extDict;
- (void)setExtDict:;
- (id)trackerTabName;
- (id)weakVC;
- (void)setWeakVC:;
- (void)setChatList:;
- (BOOL)isTrashStrangerBox;
- (void)didEndNotify;
- (void)didReloadTrashALLChatList:withExtDict:;
- (void)didReloadTrashChatList:withExtDict:;
- (void)didDeleteTrashChatList:;
- (void)didInsertTrashChat:atIndex:withExt:;
- (void)configWithDataManager:;
- (void)loadFirstPageWithCompletion:;
- (id)getBizInfo;
- (id)actionDelegate;
- (id)dataManager;
- (id)chatList;
- (BOOL)hasMore;
- (void)setDataManager:;
- (void).cxx_destruct;
- (void)setActionDelegate:;
@end
