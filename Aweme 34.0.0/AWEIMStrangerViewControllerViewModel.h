@interface AWEIMStrangerViewControllerViewModel : NSObject
@property (nonatomic) AWEIMStrangerBoxChatDataManager dataController;
@property (nonatomic) <AWEIMStrangerViewControllerViewModelWeakVC> weakVC;
- (void)setDataController:;
- (id)conversationDataManager;
- (void)configViewModel;
- (id)weakVC;
- (void)setWeakVC:;
- (void)strangerConversationCountAfterDate:completion:;
- (void)strangerMessageCountAfterDate:completion:;
- (void)fetchStrangerData;
- (void)refreshCurrentStrangerBoxWhenInStrangerList;
- (void)markCurrentEnterStrangerBoxDate;
- (void)gotoProfileViewControllerWithChatModel:;
- (void)gotoMessageListViewControllerWithChatModel:cellVM:;
- (void)clearUserFlagIfNeeded;
- (void)removeAcquaintanceChat:;
- (id)getBizInfo;
- (void)addMarkReadCofig;
- (void)fetchStrangerDataWithIsInit:completion:;
- (id)init;
- (void).cxx_destruct;
- (id)dataController;
@end
