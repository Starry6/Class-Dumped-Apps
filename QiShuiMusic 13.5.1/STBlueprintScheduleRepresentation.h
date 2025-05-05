@interface STBlueprintScheduleRepresentation : NSObject
@property (nonatomic) STBlueprintScheduleSimpleItem simpleSchedule;
@property (nonatomic) NSArray customScheduleItems;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)simpleSchedule;
- (void)setSimpleSchedule:;
- (id)customScheduleItems;
- (void)setCustomScheduleItems:;
@end
