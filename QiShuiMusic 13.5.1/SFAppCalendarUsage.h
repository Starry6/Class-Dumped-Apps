@interface SFAppCalendarUsage : NSManagedObject
@property (nonatomic) NSNumber dayOfWeek;
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSNumber tier1;
@property (nonatomic) NSNumber tier2;
@property (nonatomic) NSNumber tier3;
@property (nonatomic) NSNumber tier4;
@property (nonatomic) NSNumber tier5;
@property (nonatomic) NSNumber timeOfDaySlot;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) SFApp hasApp;
@property (nonatomic) SFApp hintedBy;
+ (id)entityName;
+ (id)fetchRequest;
@end
