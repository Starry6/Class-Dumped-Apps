@interface RivalsResponse_ActivityTimeConfig : IESLivePBBaseMessage
@property (nonatomic) RivalsResponse_ActivityTime activityTimeToday;
@property (nonatomic) BOOL hasActivityTimeToday;
@property (nonatomic) RivalsResponse_ActivityTime activityTimeTomorrow;
@property (nonatomic) BOOL hasActivityTimeTomorrow;
+ (id)descriptor;
@end
