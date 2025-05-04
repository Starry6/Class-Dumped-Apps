@interface AWEIMStrangerBoxChatDataManagerReloadUpdater : NSObject
@property (nonatomic) NSMutableArray updateCommonChatArray;
@property (nonatomic) NSMutableArray updateTrashChatArray;
@property (nonatomic) NSMutableArray updateOlderChatArray;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (id)updateCommonChatArray;
- (id)updateOlderChatArray;
- (id)updateTrashChatArray;
- (void)setUpdateOlderChatArray:;
- (void)setUpdateTrashChatArray:;
- (void)setUpdateCommonChatArray:;
- (id)init;
- (void).cxx_destruct;
- (id)ext;
@end
