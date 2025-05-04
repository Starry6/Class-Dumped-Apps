@interface AWEIMStrangerBoxChatDataManagerUpdater : NSObject
@property (nonatomic) AWEIMStrangerBoxChatDataManagerInsertUpdater inserter;
@property (nonatomic) AWEIMStrangerBoxChatDataManagerDeleteUpdater deleter;
@property (nonatomic) AWEIMStrangerBoxChatDataManagerReloadUpdater reloader;
@property (nonatomic) AWEIMStrangerBoxChatDataManagerReloadAllUpdater reloadAllUpdater;
- (id)reloadAllUpdater;
- (id)inserter;
- (id)deleter;
- (id)reloader;
- (void)setInserter:;
- (void)setDeleter:;
- (void)setReloader:;
- (void)setReloadAllUpdater:;
- (id)init;
- (void).cxx_destruct;
@end
