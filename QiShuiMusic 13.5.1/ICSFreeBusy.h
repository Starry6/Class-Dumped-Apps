@interface ICSFreeBusy : ICSComponent
@property (nonatomic) NSArray attendee;
@property (nonatomic) ICSDate created;
@property (nonatomic) ICSDate dtend;
@property (nonatomic) ICSDate dtstamp;
@property (nonatomic) ICSDate dtstart;
@property (nonatomic) ICSDuration duration;
@property (nonatomic) NSArray freebusy;
@property (nonatomic) ICSUserAddress organizer;
@property (nonatomic) NSString summary;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString x_calendarserver_mask_uid;
@property (nonatomic) NSString x_calendarserver_extended_freebusy;
- (id)freebusy;
- (void)setFreebusy:;
- (id)x_calendarserver_mask_uid;
- (void)setX_calendarserver_mask_uid:;
- (id)x_calendarserver_extended_freebusy;
- (void)setX_calendarserver_extended_freebusy:;
+ (id)name;
@end
