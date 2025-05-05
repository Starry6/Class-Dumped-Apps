@interface Process : NSManagedObject
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSString procName;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSSet hasLiveUsage;
@property (nonatomic) LiveUsage hintLiveUsage;
+ (id)entityName;
+ (id)fetchRequest;
@end
