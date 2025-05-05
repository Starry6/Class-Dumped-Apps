@interface STLocalOrganizationSettings : STCoreOrganizationSettings
@property (nonatomic) STLocalOrganization organization;
@property (nonatomic) NSString recoveryAltDSID;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)setPasscode:;
- (id)dictionaryRepresentation;
@end
