@interface AWEHPHambMessageStorage : NSObject
@property (nonatomic) q version;
@property (nonatomic) NSLock lock;
@property (nonatomic) MMKV mmkv;
- (void)setMmkv:;
- (id)mmkv;
- (void)reloadMessagesWithVersion:;
- (id)readMessages;
- (BOOL)writeMessage:error:;
- (long long)p_readVersionFromStorage;
- (void)p_reloadMessagesWithVersion:needWriteFile:;
- (BOOL)p_checkMsgKey:;
- (long long)p_getVersionFromMsgKey:;
- (id)p_getMsgKeyWithVersion:;
- (BOOL)p_writeInfoToStorageWithVersion:;
- (long long)getVersion;
- (id)init;
- (void)setLock:;
- (id)lock;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
@end
