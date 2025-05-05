@interface CalSignalSensor : NSObject
@property (nonatomic) NSInteger signal;
@property (nonatomic) @? fireBlock;
- (int)signal;
- (void)_shutDownSource;
- (void)dealloc;
- (void)setSignal:;
- (void)startSensor;
- (id)fireBlock;
- (void).cxx_destruct;
- (id)description;
- (void)setFireBlock:;
- (void)stopSensor;
- (id)initWithSignal:;
@end
