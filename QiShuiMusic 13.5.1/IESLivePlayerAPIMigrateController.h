@interface IESLivePlayerAPIMigrateController : NSObject
@property (nonatomic) BOOL apiMigratePhase1Enable;
- (BOOL)apiMigratePhase1Enable;
- (void)setApiMigratePhase1Enable:;
- (id)init;
- (void)setup;
+ (id)sharedInstance;
@end
