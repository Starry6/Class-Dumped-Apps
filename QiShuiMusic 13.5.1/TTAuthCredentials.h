@interface TTAuthCredentials : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
- (void)setPassword:;
- (id)username;
- (id)password;
- (void)setUsername:;
- (void).cxx_destruct;
- (id)initWithUsername:password:;
@end
