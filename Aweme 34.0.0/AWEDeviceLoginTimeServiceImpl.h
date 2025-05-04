@interface AWEDeviceLoginTimeServiceImpl : HTSService
@property (nonatomic) NSDate lastLoginDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_loadLastLoginDate;
- (double)p_readLoginDate;
- (double)p_currentTime;
- (void)p_saveLoginDateWithTime:;
- (void)updateLoginDate;
- (id)lastLoginDate;
- (id)init;
- (void)setLastLoginDate:;
- (void).cxx_destruct;
@end
