@interface BMCoreDuetMediaUsageSource : BMSource
@property (nonatomic) <BMCoreDuetMediaUsageStore> storage;
- (void)sendEvent:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
@end
