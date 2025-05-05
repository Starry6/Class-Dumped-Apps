@interface DAECalendarDirectorySearchResult : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString preferredAddress;
@property (nonatomic) NSString principalPath;
- (void)setLastName:;
- (void)setFirstName:;
- (id)firstName;
- (id)lastName;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)principalPath;
- (void)setPrincipalPath:;
- (id)preferredAddress;
- (void)setPreferredAddress:;
+ (BOOL)supportsSecureCoding;
@end
