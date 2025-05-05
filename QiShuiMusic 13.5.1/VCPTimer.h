@interface VCPTimer : NSObject
- (void)dealloc;
- (void)destroy;
- (void).cxx_destruct;
- (void)handleTimerEvent;
- (id)initWithIntervalNanoseconds:isOneShot:andBlock:;
+ (id)timerWithInterval:unit:oneShot:andBlock:;
+ (id)timerWithIntervalSeconds:isOneShot:andBlock:;
@end
