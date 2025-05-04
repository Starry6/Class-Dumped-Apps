@interface AWEByteSyncManager : NSObject
@property (nonatomic) NSMutableArray allCommonParamsBlocks;
- (id)commonParams;
- (void)setAllCommonParamsBlocks:;
- (id)allCommonParamsBlocks;
- (void)setupBDUGSyncSDK;
- (void).cxx_destruct;
+ (void)registerBusinessId:handleMessageBlock:;
+ (void)unregisterBusinessId:;
+ (void)registerCommonParamsBlock:;
+ (void)uploadMessageData:forBusinessId:;
+ (void)trySyncDataFromServer;
+ (id)sharedManager;
@end
