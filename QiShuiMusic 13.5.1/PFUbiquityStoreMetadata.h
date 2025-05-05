@interface PFUbiquityStoreMetadata : NSManagedObject
@property (nonatomic) NSData storeOptionsBinaryPlistData;
@property (nonatomic) NSString modelVersionHashString;
@property (nonatomic) NSString storeURLString;
@property (nonatomic) NSString ubiquityName;
@property (nonatomic) NSString storeType;
@property (nonatomic) NSString ubiquityRootURLString;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString ubiquityRelativePath;
@property (nonatomic) NSSet transactionEntries;
@property (nonatomic) NSSet peerStates;
@property (nonatomic) NSSet primaryKeyRanges;
- (id)initWithUbiquityName:andUbiquityRootLocation:insertIntoManagedObjectContext:;
@end
