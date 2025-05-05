@interface BDUGLuckyDogSyncManager : NSObject
@property (nonatomic) NSMutableArray syncDatas;
@property (nonatomic) NSMutableDictionary actionHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleBusinessID:;
- (BOOL)handleByteSyncMessageData:businessID:;
- (BOOL)handleMessageDictionary:;
- (void)registerSyncType:withHandler:;
- (void)setSyncDatas:;
- (id)syncDatas;
- (id)actionHandlers;
- (void).cxx_destruct;
- (void)setActionHandlers:;
- (id)businessIDs;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
