@interface TRIMLRuntimeSchedulingPolicy : TRIPBMessage
@property (nonatomic) I maxEvaluations;
@property (nonatomic) BOOL hasMaxEvaluations;
@property (nonatomic) I periodicIntervalSeconds;
@property (nonatomic) BOOL hasPeriodicIntervalSeconds;
@property (nonatomic) TRIPBTimestamp startsAfter;
@property (nonatomic) BOOL hasStartsAfter;
@property (nonatomic) TRIPBTimestamp endsAt;
@property (nonatomic) BOOL hasEndsAt;
@property (nonatomic) NSInteger qos;
@property (nonatomic) BOOL hasQos;
+ (id)descriptor;
@end
