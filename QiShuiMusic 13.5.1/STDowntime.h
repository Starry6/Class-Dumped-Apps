@interface STDowntime : NSManagedObject
@property (nonatomic) NSString calendarIdentifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL canAskForMoreTime;
@property (nonatomic) NSSet schedule;
- (void)setStartHour:startMinute:endHour:endMinute:;
@end
