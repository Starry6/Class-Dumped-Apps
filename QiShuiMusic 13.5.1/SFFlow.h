@interface SFFlow : NSManagedObject
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSString remoteID;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSSet hasLivePerformance;
@property (nonatomic) SFNetworkAttachment onNetwork;
+ (id)entityName;
+ (id)fetchRequest;
@end
