@interface AWEUserPassport : NSObject
@property (nonatomic) AWEUserConfiguration configuration;
@property (nonatomic) AWEUserModel user;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setConfiguration:;
- (void).cxx_destruct;
- (id)configuration;
+ (id)persistUser:;
+ (id)logoutFrom:;
+ (id)loginWithTicket:;
+ (id)passport;
+ (id)clearUser;
+ (void)onLaunch:;
+ (id)currentUser;
+ (id)config;
+ (BOOL)isLogin;
@end
