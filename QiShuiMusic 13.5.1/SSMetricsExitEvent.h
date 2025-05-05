@interface SSMetricsExitEvent : SSMetricsBaseEvent
@property (nonatomic) NSString exitType;
@property (nonatomic) NSString exitURL;
- (id)init;
- (id)description;
- (id)exitType;
- (void)setExitType:;
- (id)exitURL;
- (void)setExitTypeWithSuspendReason:;
- (void)setExitURL:;
@end
