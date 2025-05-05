@interface STDowntimeOverrideUpdater : NSObject
@property (nonatomic) <STDowntimeOverrideModifier> downtimeOverrideModifier;
- (void).cxx_destruct;
- (id)downtimeOverrideModifier;
+ (BOOL)updateActiveOverrideOnBlueprintNow:usingModifier:error:;
+ (BOOL)updateActiveOverrideUsingModifier:byRecomputingFromSchedule:atDate:inCalendar:error:;
@end
