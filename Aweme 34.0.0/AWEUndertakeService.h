@interface AWEUndertakeService : NSObject
@property (nonatomic) AWEDiversionNewUserTask diversionNewUser;
- (void)updateFCollectInfo:notLoginConfig:version:;
- (void)requestActivitySettingsInfo;
- (void)reportAckInstall;
- (id)diversionNewUser;
- (void)setDiversionNewUser:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
