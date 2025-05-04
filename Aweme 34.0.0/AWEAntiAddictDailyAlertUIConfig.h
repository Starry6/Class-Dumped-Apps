@interface AWEAntiAddictDailyAlertUIConfig : MTLModel
@property (nonatomic) q dayDefaultRemindInterval;
@property (nonatomic) NSString dayPrimaryTitle;
@property (nonatomic) NSString daySecondaryTitle;
@property (nonatomic) q nightDefaultSleepTime;
@property (nonatomic) NSString nightPrimaryTitle;
@property (nonatomic) NSString nightSecondaryTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)dayDefaultRemindInterval;
- (long long)nightDefaultSleepTime;
- (id)dayPrimaryTitle;
- (id)nightPrimaryTitle;
- (id)daySecondaryTitle;
- (id)nightSecondaryTitle;
- (void)setDayDefaultRemindInterval:;
- (void)setDayPrimaryTitle:;
- (void)setDaySecondaryTitle:;
- (void)setNightDefaultSleepTime:;
- (void)setNightPrimaryTitle:;
- (void)setNightSecondaryTitle:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
