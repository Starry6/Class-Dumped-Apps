@interface SFTrackerDomain : NSManagedObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString domainOwner;
+ (id)entityName;
+ (id)fetchRequest;
@end
