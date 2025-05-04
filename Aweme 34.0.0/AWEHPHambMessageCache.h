@interface AWEHPHambMessageCache : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) q version;
@property (nonatomic) NSMutableArray messages;
- (void)reloadMessagesWithVersion:;
- (id)getAllMessages;
- (id)p_generateSortMessages:version:;
- (BOOL)p_removeOldMessages:version:;
- (id)getMessagesFromIndex:;
- (long long)p_insertMessage:toMessages:;
- (id)initWithVersion:messages:;
- (long long)insertMessage:error:;
- (void)setLock:;
- (id)messages;
- (id)lock;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setMessages:;
@end
