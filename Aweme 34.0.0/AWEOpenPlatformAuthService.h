@interface AWEOpenPlatformAuthService : HTSService
@property (nonatomic) NSMapTable imMsgVCMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authorizeWithModel:withCompletion:;
- (void)showAuthIMMessageViewWithParams:completion:;
- (void)closePrivateMessageViewWithParams:completion:;
- (void)showRealNameInterconnectionViewWithParams:completion:;
- (void)showVC:at:useHalf:halfVCBlock:completion:;
- (id)getLaunchMethodFromFlowType:;
- (id)getMobWithParams:;
- (id)getAttribution:;
- (id)imMsgVCMap;
- (void)setImMsgVCMap:;
- (void).cxx_destruct;
+ (id)allLocalScopes;
+ (void)authScope:forClientKey:;
+ (void)removeScope:forClientKey:;
+ (BOOL)checkScope:validPeriod:forClientKey:;
@end
