@interface DNDMutableSenderConfiguration : DNDSenderConfiguration
@property (nonatomic) NSMutableSet allowedContactTypes;
@property (nonatomic) NSMutableSet deniedContactTypes;
@property (nonatomic) NSMutableSet allowedContactGroups;
@property (nonatomic) NSMutableSet deniedContactGroups;
@property (nonatomic) NSMutableSet allowedContacts;
@property (nonatomic) NSMutableSet deniedContacts;
@property (nonatomic) DNDBypassSettings phoneCallBypassSettings;
- (void)setDeniedContactGroups:;
- (void)setDeniedContacts:;
- (void)setDeniedContactTypes:;
- (void)setAllowedContactGroups:;
- (void)removeAllowedContactMatchingContact:;
- (void)setPhoneCallBypassSettings:;
- (void)setAllowedContactTypes:;
- (void)setAllowedContacts:;
- (void)removeDeniedContactMatchingContact:;
@end
