@interface MCProfileInfo : NSObject
@property (nonatomic) NSString friendlyName;
@property (nonatomic) NSString profileDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString UUID;
@property (nonatomic) NSString organization;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) BOOL isInstalledByDeclarativeManagement;
- (id)initWithProfile:;
- (id)organization;
- (void)setUUID:;
- (void)setProfileDescription:;
- (id)identifier;
- (void)setOrganization:;
- (void)setIsInstalledByDeclarativeManagement:;
- (id)initWithCoder:;
- (id)expiryDate;
- (void)encodeWithCoder:;
- (id)friendlyName;
- (void).cxx_destruct;
- (void)setExpiryDate:;
- (void)setFriendlyName:;
- (id)UUID;
- (BOOL)isInstalledByDeclarativeManagement;
- (void)setIdentifier:;
- (id)profileDescription;
+ (BOOL)supportsSecureCoding;
@end
