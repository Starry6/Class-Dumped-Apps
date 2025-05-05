@interface FBSProcessResourceProvision : FBSProcessExecutionProvision
@property (nonatomic) q type;
@property (nonatomic) {?=qQQ} allowance;
- (void)_queue_evaluateConsumptionFromTimer:;
- (void)_beginMonitoring;
- (void)dealloc;
- (BOOL)allowanceRemaining:;
- (id)initWithAllowance:;
- (void)setAllowance:;
- (id)succinctDescriptionBuilder;
- (BOOL)isResourceProvision;
- (void)_prepareForReuse;
- (id)allowance;
- (void)_queue_stopMonitoring;
- (long long)type;
- (BOOL)_queue_calculateValueConsumed:;
- (BOOL)_queue_updateConsumption;
- (void)_stopMonitoring;
- (void).cxx_destruct;
- (void)_queue_noteAllowanceExhausted;
- (void)_updateProgress;
- (id)copyWithZone:;
+ (id)provisionWithResourceType:timeInterval:;
+ (id)provisionWithAllowance:;
@end
