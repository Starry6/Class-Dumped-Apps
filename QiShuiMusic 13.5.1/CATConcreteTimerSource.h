@interface CATConcreteTimerSource : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)scheduleOneShotTimerWithIdentifier:timeInterval:queue:fireHandler:;
- (id)scheduleRepeatTimerWithIdentifier:timeInterval:queue:totalFires:fireHandler:;
- (id)scheduleInfiniteTimerWithIdentifier:timeInterval:queue:fireHandler:;
@end
