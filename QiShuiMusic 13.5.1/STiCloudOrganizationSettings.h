@interface STiCloudOrganizationSettings : STCoreOrganizationSettings
@property (nonatomic) STiCloudOrganization organization;
@property (nonatomic) NSString recoveryAltDSID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)setPasscode:;
- (id)dictionaryRepresentation;
+ (id)serializableClassName;
@end
