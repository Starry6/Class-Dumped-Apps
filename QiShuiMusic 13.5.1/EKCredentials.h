@interface EKCredentials : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
- (id)username;
- (id)password;
- (void).cxx_destruct;
- (id)description;
+ (id)credentialsWithUsername:password:;
@end
