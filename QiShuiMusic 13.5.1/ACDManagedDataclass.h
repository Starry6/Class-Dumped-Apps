@interface ACDManagedDataclass : NSManagedObject
@property (nonatomic) NSString name;
@property (nonatomic) NSSet provisionedAccounts;
@property (nonatomic) NSSet syncableTypes;
@property (nonatomic) NSSet supportedTypes;
@property (nonatomic) NSSet enabledAccounts;
@end
