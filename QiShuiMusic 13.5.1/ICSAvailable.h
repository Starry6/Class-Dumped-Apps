@interface ICSAvailable : ICSComponent
@property (nonatomic) NSArray attach;
@property (nonatomic) NSArray attendee;
@property (nonatomic) ICSDate created;
@property (nonatomic) ICSDate dtend;
@property (nonatomic) ICSDate dtstart;
@property (nonatomic) ICSDate dtstamp;
@property (nonatomic) ICSDuration duration;
@property (nonatomic) NSArray rrule;
@property (nonatomic) NSString uid;
+ (id)name;
@end
