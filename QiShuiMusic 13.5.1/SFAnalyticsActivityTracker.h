@interface SFAnalyticsActivityTracker : NSObject
@property (nonatomic) NSNumber measurement;
- (void)cancel;
- (id)initWithName:clientClass:;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setMeasurement:;
- (void)performAction:;
- (void).cxx_destruct;
- (id)measurement;
- (void)stopWithEvent:result:;
@end
