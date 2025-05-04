@interface AWESECAppJumpEventCenter : NSObject
@property (nonatomic) SECEventCenter eventCenter;
- (void)publishEvent:;
- (id)eventCenter;
- (void)registerSubscriber:forEventType:;
- (void)setEventCenter:;
- (id)init;
- (void).cxx_destruct;
+ (void)publishEvent:;
+ (void)registerSubscriber:forEventType:;
+ (id)shared;
@end
