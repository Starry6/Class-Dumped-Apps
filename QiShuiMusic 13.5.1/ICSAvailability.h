@interface ICSAvailability : ICSComponent
@property (nonatomic) ICSDate created;
@property (nonatomic) NSString uid;
@property (nonatomic) ICSDate dtstamp;
@property (nonatomic) ICSDuration duration;
@property (nonatomic) ICSDate dtstart;
@property (nonatomic) ICSDate dtend;
@property (nonatomic) ICSDate last_modified;
@property (nonatomic) Q sequence;
@property (nonatomic) ICSUserAddress organizer;
@property (nonatomic) NSString summary;
@property (nonatomic) NSURL url;
+ (id)name;
@end
