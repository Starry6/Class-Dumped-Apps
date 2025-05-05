@interface IESLiveSaaSOfflineManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_groupNames;
- (id)_gurdAccessKey;
- (id)_liveFalconPatterns;
- (void)configGeckoAndFalcon;
- (id)dataForPath:channel:;
- (id)geckoKey;
- (void)registerCustomInterceptor;
- (void)settingsDidUpdate;
- (void)updatePuzzleFalconPatterns;
- (id)init;
+ (id)sharedManager;
@end
