@interface ARMemoryPressureMonitor : NSObject
@property (nonatomic) <ARMemoryPressureMonitorDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
