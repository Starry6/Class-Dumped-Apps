@interface BDXBridgeCreateCalendarMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber repeatInterval;
@property (nonatomic) NSNumber repeatEndDate;
@property (nonatomic) NSNumber startDate;
@property (nonatomic) NSNumber endDate;
@property (nonatomic) NSNumber alarmOffset;
@property (nonatomic) NSString title;
@property (nonatomic) NSString notes;
@property (nonatomic) NSString location;
@property (nonatomic) NSString url;
@property (nonatomic) NSString failedToastText;
@property (nonatomic) NSString successToastText;
@property (nonatomic) NSArray daysOfWeek;
@property (nonatomic) NSDictionary log_extra;
@property (nonatomic) q repeatFrequency;
- (id)failedToastText;
- (long long)repeatFrequency;
- (void)setAlarmOffset:;
- (id)alarmOffset;
- (id)log_extra;
- (id)repeatEndDate;
- (void)setFailedToastText:;
- (void)setLog_extra:;
- (void)setRepeatEndDate:;
- (void)setRepeatFrequency:;
- (void)setSuccessToastText:;
- (id)successToastText;
- (id)notes;
- (id)startDate;
- (id)url;
- (id)repeatInterval;
- (void)setStartDate:;
- (id)identifier;
- (void)setType:;
- (void)setTitle:;
- (void)setUrl:;
- (id)location;
- (void)setEndDate:;
- (void)setRepeatInterval:;
- (id)endDate;
- (id)type;
- (id)title;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setNotes:;
- (void)setIdentifier:;
- (void)setDaysOfWeek:;
- (id)daysOfWeek;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
