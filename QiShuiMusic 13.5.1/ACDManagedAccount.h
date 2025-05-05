@interface ACDManagedAccount : NSManagedObject
@property (nonatomic) NSDate lastCredentialRenewalRejectionDate;
@property (nonatomic) @ dataclassProperties;
@property (nonatomic) NSNumber active;
@property (nonatomic) NSNumber warmingUp;
@property (nonatomic) NSNumber authenticated;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString authenticationType;
@property (nonatomic) NSString accountDescription;
@property (nonatomic) NSNumber supportsAuthentication;
@property (nonatomic) NSString owningBundleID;
@property (nonatomic) NSString username;
@property (nonatomic) NSString credentialType;
@property (nonatomic) NSSet childAccounts;
@property (nonatomic) NSSet provisionedDataclasses;
@property (nonatomic) ACDManagedAccount parentAccount;
@property (nonatomic) ACDManagedAccountType accountType;
@property (nonatomic) NSSet customProperties;
@property (nonatomic) NSSet enabledDataclasses;
@property (nonatomic) NSNumber visible;
@property (nonatomic) NSString modificationID;
- (id)description;
@end
