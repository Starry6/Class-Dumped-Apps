@interface IESLiveDIManager : NSObject
@property (nonatomic) NSMapTable store;
@property (nonatomic) IESLiveDI appDI;
@property (nonatomic) IESLiveDIIsolation isolationInfo;
@property (nonatomic) BOOL disableBackupToCurrent;
@property (nonatomic) BOOL onlineChannel;
@property (nonatomic) IESLiveDI currentRoomDI;
@property (nonatomic) IESLiveDI currentSlideDI;
- (id)aDIForContext:;
- (id)appDI;
- (void)checkDIBindObject:serviceAttacher:protocol:toLiveDI:;
- (id)currentRoomDI;
- (id)currentSlideDI;
- (BOOL)disableBackupToCurrent;
- (BOOL)disableOnlineProtocol:;
- (id)isolationInfo;
- (BOOL)onlineChannel;
- (id)registerDI;
- (id)registerDIWithParentDI:;
- (id)registerDIWithParentDI:optimize:;
- (void)setAppDI:;
- (void)setCurrentRoomDI:;
- (void)setCurrentSlideDI:;
- (void)setDisableBackupToCurrent:;
- (void)setIsolationInfo:;
- (void)setOnlineChannel:;
- (void)setRelationshipWithParentDI:childDI:;
- (void)unregisterDIForContext:;
- (id)init;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (id)mixed_currentDI;
+ (id)aDIForProtocol:withDIContextAtttacher:;
+ (void)combineDisposableForMultiUse:withProtocols:;
+ (id)currentDI;
+ (id)currentDIContext;
+ (BOOL)disableOnlineProtocol:;
+ (id)mixed_aDIForProtocol:withDIContextAtttacher:;
+ (void)mixed_combineDisposableForMultiUse:withProtocols:;
+ (id)mixed_currentDIContext;
+ (id)mixed_multiUse:forProtocol:withContextAtttacher:;
+ (id)mixed_objectforProtocol:withContextAtttacher:;
+ (id)mixed_shared;
+ (BOOL)mixed_use:forProtocol:withContextAtttacher:;
+ (id)multiUse:forProtocol:withContextAtttacher:;
+ (id)objectforProtocol:withContextAtttacher:;
+ (BOOL)use:forProtocol:withContextAtttacher:;
+ (id)shared;
@end
