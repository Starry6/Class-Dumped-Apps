@interface AWELuckyCatPopupCalendarModel : MTLModel
@property (nonatomic) NSString remindStartTime;
@property (nonatomic) NSString remindCount;
@property (nonatomic) NSString remindTitle;
@property (nonatomic) NSString triggerBeforeMins;
@property (nonatomic) NSString durationMinutes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remindTitle;
- (void)setRemindTitle:;
- (id)remindStartTime;
- (void)setRemindStartTime:;
- (id)remindCount;
- (void)setRemindCount:;
- (id)triggerBeforeMins;
- (void)setTriggerBeforeMins:;
- (id)durationMinutes;
- (void)setDurationMinutes:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
