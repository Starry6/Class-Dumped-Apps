@interface SFAppEndpoint : NSManagedObject
@property (nonatomic) NSInteger effectiveUserId;
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSData endpointSet;
@property (nonatomic) SFApp hasApp;
+ (id)entityName;
+ (id)fetchRequest;
@end
