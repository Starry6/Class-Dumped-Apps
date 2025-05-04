@interface AWEHPHambMessageManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableArray blocks;
@property (nonatomic) AWEHPHambMessageCache cache;
@property (nonatomic) AWEHPHambMessageStorage storageManager;
@property (nonatomic) AWEHPHambMessageHandler handler;
- (void)addNewMessageBlock:;
- (void)reloadMessagesWithVersion:;
- (id)getAllMessages;
- (id)getMessagesFromIndex:;
- (id)p_generateCacheWithVersion:messages:;
- (void)insertNewMessage:completion:;
- (void)setCache:;
- (void)setHandler:;
- (id)cache;
- (id)init;
- (void)setLock:;
- (id)lock;
- (id)handler;
- (void)setStorageManager:;
- (id)storageManager;
- (void).cxx_destruct;
- (void)setBlocks:;
- (id)blocks;
@end
