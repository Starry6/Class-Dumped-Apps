@interface AWEIMStrangerBoxChatDataManagerDeleteUpdater : NSObject
@property (nonatomic) NSMutableArray deleteCommonChatArray;
@property (nonatomic) NSMutableArray deleteTrashChatArray;
@property (nonatomic) NSMutableArray deleteOlderChatArray;
- (id)deleteTrashChatArray;
- (id)deleteCommonChatArray;
- (void)setDeleteOlderChatArray:;
- (void)setDeleteCommonChatArray:;
- (void)setDeleteTrashChatArray:;
- (id)deleteOlderChatArray;
- (id)init;
- (void).cxx_destruct;
@end
