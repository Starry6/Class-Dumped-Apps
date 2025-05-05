@interface STDailySchedule : NSManagedObject
@property (nonatomic) q weekday;
@property (nonatomic) q startHour;
@property (nonatomic) q startMinute;
@property (nonatomic) q endHour;
@property (nonatomic) q endMinute;
@property (nonatomic) STDowntime downtime;
@end
