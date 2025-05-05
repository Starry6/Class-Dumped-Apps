@interface STFamilyOrganizationSettings : STCoreOrganizationSettings
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL shareWebUsage;
@property (nonatomic) STFamilyOrganization organization;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSData versionVector;
@property (nonatomic) BOOL isDirty;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (id)redactedDescription;
- (void)didChangeValueForKey:;
- (void)setIsManaged:;
- (void)setPasscode:;
- (id)description;
- (id)dictionaryRepresentation;
+ (id)serializableClassName;
@end
