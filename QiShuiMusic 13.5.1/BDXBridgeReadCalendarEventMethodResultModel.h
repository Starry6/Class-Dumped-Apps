@interface BDXBridgeReadCalendarEventMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber startDate;
@property (nonatomic) NSNumber endDate;
@property (nonatomic) NSNumber alarmOffset;
@property (nonatomic) NSNumber allDay;
@property (nonatomic) NSString title;
@property (nonatomic) NSString notes;
@property (nonatomic) NSString location;
@property (nonatomic) NSString url;
- (void)setAlarmOffset:;
- (id)alarmOffset;
- (id)notes;
- (void)setAllDay:;
- (id)startDate;
- (id)url;
- (void)setStartDate:;
- (void)setTitle:;
- (void)setUrl:;
- (id)location;
- (void)setEndDate:;
- (id)endDate;
- (id)title;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setNotes:;
- (id)allDay;
+ (id)JSONKeyPathsByPropertyKey;
@end
