@interface VSPersistentUserAccount : NSManagedObject
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) q accountType;
@property (nonatomic) NSString authenticationData;
@property (nonatomic) NSDate billingCycleEndDate;
@property (nonatomic) NSString billingIdentifier;
@property (nonatomic) NSDate created;
@property (nonatomic) BOOL developer;
@property (nonatomic) NSString deviceIdentifier;
@property (nonatomic) NSString deviceName;
@property (nonatomic) q deviceType;
@property (nonatomic) q keychainItemHash;
@property (nonatomic) BOOL markedAsDeleted;
@property (nonatomic) NSDate modified;
@property (nonatomic) NSString providerID;
@property (nonatomic) BOOL requiresSystemTrust;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) q sourceType;
@property (nonatomic) NSObject tierIdentifiers;
@property (nonatomic) NSURL updateURL;
@property (nonatomic) s version;
+ (id)fetchRequest;
@end
