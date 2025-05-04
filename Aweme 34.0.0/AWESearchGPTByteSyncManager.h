@interface AWESearchGPTByteSyncManager : NSObject
@property (nonatomic) NSMutableDictionary syncMsgDict;
@property (nonatomic) NSMutableArray syncMsgArray;
@property (nonatomic) BOOL isConnecting;
- (void)trySyncDataFromServer;
- (void)registerByteSync;
- (void)handleNewMsg:;
- (int)byteSyncBusinessID;
- (void)unregisterByteSync;
- (void)clearSyncMsgDataWithSearchID:;
- (void)readSyncMsgDataWithSearchID:complete:;
- (void)receiveDataDict:;
- (id)syncMsgDict;
- (id)syncMsgArray;
- (void)setSyncMsgDict:;
- (void)setSyncMsgArray:;
- (id)init;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setIsConnecting:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
