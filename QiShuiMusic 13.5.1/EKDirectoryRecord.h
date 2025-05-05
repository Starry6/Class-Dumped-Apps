@interface EKDirectoryRecord : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString preferredAddress;
@property (nonatomic) NSString principalPath;
@property (nonatomic) NSDictionary userInfo;
- (void)setLastName:;
- (id)userInfo;
- (void)setFirstName:;
- (id)firstName;
- (id)lastName;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (id)principalPath;
- (void)setPrincipalPath:;
- (id)preferredAddress;
- (void)setPreferredAddress:;
+ (id)recordFromSearchResult:;
@end
