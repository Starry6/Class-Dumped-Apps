@interface AWELiteActivityPopupCalendarModel : MTLModel
@property (nonatomic) NSNumber remindStartTime;
@property (nonatomic) NSNumber remindCount;
@property (nonatomic) NSString remindTitle;
@property (nonatomic) NSNumber triggerBeforeMins;
@property (nonatomic) NSNumber durationMinutes;
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
