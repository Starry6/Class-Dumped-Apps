@interface CTCellularPlanProvisioning : NSObject
@property (nonatomic) BOOL supportsEmbeddedSIM;
- (id)init;
- (void).cxx_destruct;
- (void)addPlanWith:completionHandler:;
- (BOOL)supportsCellularPlan;
- (BOOL)supportsEmbeddedSIM;
@end
