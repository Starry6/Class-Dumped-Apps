@interface SSMetricsAccountEvent : SSMetricsBaseEvent
@property (nonatomic) NSString accountEventType;
- (id)init;
- (id)accountEventType;
- (void)setAccountEventType:;
- (void)setAccountEventTypeWithEventIdentifier:;
@end
