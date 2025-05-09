@interface AALoginResponseAppleAccountInfo : NSObject
@property (nonatomic) NSString personID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSArray appleIDAliases;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString primaryEmail;
@property (nonatomic) NSNumber primaryEmailVerified;
@property (nonatomic) NSNumber cloudDocsMigrated;
@property (nonatomic) NSNumber notesMigrated;
@property (nonatomic) NSNumber remindersMigrated;
@property (nonatomic) NSNumber remindersAutoMigratableToCK;
@property (nonatomic) BOOL managedAppleID;
@property (nonatomic) BOOL sandboxAccount;
@property (nonatomic) BOOL optionalTerms;
@property (nonatomic) BOOL familyEligible;
- (id)appleID;
- (BOOL)isManagedAppleID;
- (id)altDSID;
- (id)initWithDictionary:;
- (id)personID;
- (id)firstName;
- (id)lastName;
- (BOOL)isFamilyEligible;
- (BOOL)hasOptionalTerms;
- (id)appleIDAliases;
- (id)primaryEmailVerified;
- (id)primaryEmail;
- (BOOL)isSandboxAccount;
- (void).cxx_destruct;
- (id)notesMigrated;
- (id)remindersMigrated;
- (id)remindersAutoMigratableToCK;
- (id)cloudDocsMigrated;
@end
