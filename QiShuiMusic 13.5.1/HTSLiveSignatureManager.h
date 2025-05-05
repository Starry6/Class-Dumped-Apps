@interface HTSLiveSignatureManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) q limit;
@property (nonatomic) NSMutableDictionary roomSignatureByRoomId;
@property (nonatomic) NSMutableArray roomSignatureRoomIds;
@property (nonatomic) BOOL enableRoomSignature;
- (id)appendSignatureWithParameters:;
- (BOOL)enableRoomSignature;
- (void)onLogIn:;
- (void)onLogOut;
- (void)onRoomEnter:signature:;
- (id)roomSignatureByRoomId;
- (id)roomSignatureRoomIds;
- (id)roomSignatureWithRoomId:;
- (void)saveSignatureWithRoomid:signature:;
- (void)setEnableRoomSignature:;
- (void)setRoomSignatureByRoomId:;
- (void)setRoomSignatureRoomIds:;
- (long long)limit;
- (id)init;
- (void)setLimit:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)clearSignature;
+ (id)sharedSignatureManager;
@end
