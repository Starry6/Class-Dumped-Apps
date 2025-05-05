@interface SFProvisioningData : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData map;
@property (nonatomic) NSNumber tag;
@property (nonatomic) NSDate timeStamp;
+ (id)entityName;
+ (id)fetchRequest;
@end
