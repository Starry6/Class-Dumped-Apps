@interface TopNHostStrategyBridge : NSObject
@property (nonatomic) {shared_ptr<livestrategy::IStrategyCenter>=^{IStrategyCenter}^{__shared_weak_count}} strategyCenterPtr;
- (void)ClearRecords;
- (id)RunStrategy;
- (void)AddDomainUsedCount:;
- (void)setStrategyCenterPtr:;
- (id)strategyCenterPtr;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedInstance;
@end
