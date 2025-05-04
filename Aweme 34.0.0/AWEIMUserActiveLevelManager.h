@interface AWEIMUserActiveLevelManager : NSObject
@property (nonatomic) q innerCurrentLoginUserActiveLevel;
@property (nonatomic) BOOL currentLoginUserActiveLevelTypeIsValid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (long long)currentLoginUserActiveLevel;
- (void)p_saveUserActiveLevel:;
- (void)setInnerCurrentLoginUserActiveLevel:;
- (void)setCurrentLoginUserActiveLevelTypeIsValid:;
- (void)p_requestUserActiveLevelWithSecUids:completion:;
- (void)p_checkRefreshTimeInterval:;
- (long long)innerCurrentLoginUserActiveLevel;
- (BOOL)currentLoginUserActiveLevelTypeIsValid;
- (void)refreshUserActiveLevelIfNeeded;
- (id)init;
- (void)dealloc;
+ (double)refreshUserActiveLevelTimeInterval;
+ (id)sharedInstance;
@end
