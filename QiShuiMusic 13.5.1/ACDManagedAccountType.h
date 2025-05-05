@interface ACDManagedAccountType : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber supportsMultipleAccounts;
@property (nonatomic) NSString accountTypeDescription;
@property (nonatomic) NSString credentialProtectionPolicy;
@property (nonatomic) NSNumber supportsAuthentication;
@property (nonatomic) NSNumber visibility;
@property (nonatomic) NSString credentialType;
@property (nonatomic) NSString owningBundleID;
@property (nonatomic) NSSet supportedDataclasses;
@property (nonatomic) NSSet permission;
@property (nonatomic) NSSet accounts;
@property (nonatomic) NSSet accessKeys;
@property (nonatomic) NSSet syncableDataclasses;
@property (nonatomic) NSNumber obsolete;
- (id)description;
@end
