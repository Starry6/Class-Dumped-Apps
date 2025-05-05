@interface WBSPasswordWarningTopFraudTargets : NSObject
@property (nonatomic) NSArray highPriorityFraudTargets;
@property (nonatomic) NSArray fraudTargets;
@property (nonatomic) NSArray financialFraudTargets;
- (id)initWithPlistData:error:;
- (void).cxx_destruct;
- (id)financialFraudTargets;
- (id)highPriorityFraudTargets;
- (id)fraudTargets;
- (id)initWithHighPriorityTargets:targets:financialTargets:;
@end
