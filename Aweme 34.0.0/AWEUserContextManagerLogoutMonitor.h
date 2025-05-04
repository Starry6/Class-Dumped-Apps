@interface AWEUserContextManagerLogoutMonitor : NSObject
@property (nonatomic) q switchAccount;
@property (nonatomic) NSDate startLogoutDate;
@property (nonatomic) NSDate logoutSuccessDate;
- (long long)switchAccount;
- (void)setSwitchAccount:;
- (id)startLogoutDate;
- (void)setStartLogoutDate:;
- (id)logoutSuccessDate;
- (void)setLogoutSuccessDate:;
- (id)init;
- (void).cxx_destruct;
@end
