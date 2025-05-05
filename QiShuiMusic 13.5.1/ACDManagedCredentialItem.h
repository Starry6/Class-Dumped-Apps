@interface ACDManagedCredentialItem : NSManagedObject
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSNumber persistent;
@end
