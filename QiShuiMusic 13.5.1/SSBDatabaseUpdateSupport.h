@interface SSBDatabaseUpdateSupport : NSObject
@property (nonatomic) BOOL onHighCellularDataPlan;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchCellularDataPlanWithCompletionHandler:;
- (void)_fetchCellularDataPlan;
- (id)fetchCellularDataPlanSynchronously;
- (BOOL)onHighCellularDataPlan;
@end
