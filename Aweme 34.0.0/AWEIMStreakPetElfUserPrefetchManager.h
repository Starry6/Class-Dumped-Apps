@interface AWEIMStreakPetElfUserPrefetchManager : NSObject
@property (nonatomic) NSInteger currentLevelStore;
@property (nonatomic) RxPromise valueReadJob;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startObserve;
- (void)setCurrentLevelStore:;
- (id)valueReadJob;
- (int)currentLevelStore;
- (void)p_handleBumpVersionMessage:;
- (void)p_bumpCurrentUserElfLocalVersion;
- (void)iesim_didReceiveBusinessCommandMessageOfType:message:;
- (id)init;
- (int)currentLevel;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
