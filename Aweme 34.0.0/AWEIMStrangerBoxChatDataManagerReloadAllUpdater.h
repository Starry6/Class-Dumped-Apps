@interface AWEIMStrangerBoxChatDataManagerReloadAllUpdater : NSObject
@property (nonatomic) NSMutableArray reloadAllCommonChatArray;
@property (nonatomic) NSMutableArray reloadAllOlderChatArray;
@property (nonatomic) NSMutableArray reloadAllTrashChatArray;
@property (nonatomic) NSDictionary extDic;
@property (nonatomic) Q scene;
@property (nonatomic) BOOL shouldMergeUpdater;
- (id)extDic;
- (void)setExtDic:;
- (void)setReloadAllCommonChatArray:;
- (void)setReloadAllOlderChatArray:;
- (void)setReloadAllTrashChatArray:;
- (id)reloadAllCommonChatArray;
- (id)reloadAllOlderChatArray;
- (id)reloadAllTrashChatArray;
- (void)setShouldMergeUpdater:;
- (BOOL)shouldMergeUpdater;
- (void)setScene:;
- (id)init;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
