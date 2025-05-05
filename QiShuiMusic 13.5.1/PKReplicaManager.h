@interface PKReplicaManager : NSObject
@property (nonatomic) BOOL testMode;
@property (nonatomic) NSArray replicaManagerErrors;
- (id)init;
- (void)setTestMode:;
- (BOOL)testMode;
- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (id)description;
- (void)_loadState;
- (id)replicaManagerErrors;
- (id)checkoutReplicaUUIDForDrawing:;
- (void)updateVersionForDrawing:;
- (void)persistIfNeeded;
- (void)returnReplicaForDrawing:;
- (BOOL)isValidBundleIDForSaving:;
- (void)_setReplicasDirtyToken;
- (void)_scheduleSaveState;
- (void)_saveStateImmediately;
- (void)_resetAllReplicaUUIDs;
+ (id)sharedReplicaManager;
@end
