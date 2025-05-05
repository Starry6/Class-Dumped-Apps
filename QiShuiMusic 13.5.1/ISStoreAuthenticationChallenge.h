@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge
@property (nonatomic) q failureCount;
@property (nonatomic) BOOL hasPassword;
@property (nonatomic) NSString password;
@property (nonatomic) <NSURLAuthenticationChallengeSender> sender;
@property (nonatomic) NSString user;
@property (nonatomic) BOOL userNameIsEditable;
- (void)setUser:;
- (void)setPassword:;
- (id)init;
- (id)password;
- (void)dealloc;
- (long long)failureCount;
- (id)sender;
- (BOOL)hasPassword;
- (void)setFailureCount:;
- (id)user;
- (void)setSender:;
- (BOOL)userNameIsEditable;
- (BOOL)userNameIsEmail;
- (void)setHasPassword:;
- (void)setUserNameIsEditable:;
@end
