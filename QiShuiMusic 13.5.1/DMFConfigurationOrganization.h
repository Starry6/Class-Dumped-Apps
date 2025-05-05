@interface DMFConfigurationOrganization : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL active;
@property (nonatomic) NSArray registeredConfigurationSources;
- (BOOL)active;
- (id)init;
- (id)identifier;
- (void)setType:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)debugDescription;
- (id)displayName;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (void)setActive:;
- (void)setIdentifier:;
- (id)registeredConfigurationSources;
- (void)setRegisteredConfigurationSources:;
+ (BOOL)supportsSecureCoding;
@end
