@interface AWEAdLandingEvent : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) Q counter;
- (void)occuredOnce;
- (void)occured;
- (void)setHandler:;
- (unsigned long long)counter;
- (id)handler;
- (void)setCounter:;
- (void).cxx_destruct;
+ (id)eventWithHandler:;
@end
