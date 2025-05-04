@interface AWELoginAfterWorkFlowConfig : NSObject
@property (nonatomic) DYAAccountModel account;
@property (nonatomic) DYASecurityTicketModel ticket;
@property (nonatomic) UIViewController currentViewController;
@property (nonatomic) Q platform;
@property (nonatomic) BOOL nonageVerifyEnabled;
@property (nonatomic) BOOL userEditEnabled;
- (void)setNonageVerifyEnabled:;
- (void)setUserEditEnabled:;
- (BOOL)nonageVerifyEnabled;
- (BOOL)userEditEnabled;
- (void)setAccount:;
- (id)account;
- (id)description;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (void)setPlatform:;
- (void)setTicket:;
- (id)ticket;
- (id)currentViewController;
- (void)setCurrentViewController:;
+ (id)configWithBlock:;
@end
