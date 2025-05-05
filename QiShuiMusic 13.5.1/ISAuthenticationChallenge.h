@interface ISAuthenticationChallenge : NSObject
@property (nonatomic) NSString localizedMessage;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) BOOL hasPassword;
@property (nonatomic) NSString password;
@property (nonatomic) NSString user;
@property (nonatomic) q failureCount;
@property (nonatomic) BOOL userNameIsEditable;
@property (nonatomic) BOOL userNameIsEmail;
@property (nonatomic) <NSURLAuthenticationChallengeSender> sender;
- (id)password;
- (void)dealloc;
- (long long)failureCount;
- (id)sender;
- (BOOL)hasPassword;
- (id)user;
- (id)localizedTitle;
- (void)setLocalizedTitle:;
- (id)localizedMessage;
- (void)setLocalizedMessage:;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:;
- (void)useCredential:;
- (BOOL)userNameIsEditable;
- (BOOL)userNameIsEmail;
@end
