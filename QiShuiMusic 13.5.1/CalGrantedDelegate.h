@interface CalGrantedDelegate : NSObject
@property (nonatomic) NSString uri;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString preferredUserAddress;
@property (nonatomic) q permission;
- (id)uri;
- (long long)permission;
- (void)setPermission:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setUri:;
- (id)preferredUserAddress;
- (void)setPreferredUserAddress:;
+ (BOOL)supportsSecureCoding;
@end
