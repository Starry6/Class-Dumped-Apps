@interface ACDManagedAuthorization : NSManagedObject
@property (nonatomic) @ options;
@property (nonatomic) NSString grantedPermissions;
@property (nonatomic) NSString bundleID;
@property (nonatomic) ACDManagedAccountType accountType;
@end
