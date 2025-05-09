@interface ICSAlarm : ICSComponent
@property (nonatomic) NSInteger action;
@property (nonatomic) ICSDateTimeUTCValue acknowledged;
@property (nonatomic) NSArray attach;
@property (nonatomic) NSArray attendee;
@property (nonatomic) NSString description;
@property (nonatomic) NSString summary;
@property (nonatomic) ICSTrigger trigger;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString relatedTo;
@property (nonatomic) NSData bookmark;
@property (nonatomic) NSString x_wr_alarmuid;
@property (nonatomic) NSString x_apple_proximity;
@property (nonatomic) BOOL x_apple_default_alarm;
@property (nonatomic) BOOL x_apple_local_default_alarm;
@property (nonatomic) BOOL x_apple_travel_default_alarm;
@property (nonatomic) ICSStructuredLocation x_apple_structured_location;
- (void)setBookmark:;
- (id)bookmark;
- (id)x_apple_proximity;
- (BOOL)x_apple_travel_default_alarm;
- (BOOL)x_apple_default_alarm;
- (BOOL)isNoneAlarm;
- (int)action;
- (void)setX_apple_proximity:;
- (void)setRelatedTo:;
- (void)setAction:;
- (void)setAcknowledged:;
- (void)setX_apple_local_default_alarm:;
- (BOOL)x_apple_local_default_alarm;
- (id)acknowledged;
- (id)x_wr_alarmuid;
- (void)fixAlarm;
- (void)setX_wr_alarmuid:;
- (void)setX_apple_default_alarm:;
- (id)relatedTo;
- (void)setX_apple_travel_default_alarm:;
+ (id)ICSStringFromAction:;
+ (int)actionFromICSString:;
+ (id)parseableDocumentFromICS:options:;
+ (id)name;
+ (id)parseableDocumentFromICS:;
+ (id)createNoneAlarm;
@end
