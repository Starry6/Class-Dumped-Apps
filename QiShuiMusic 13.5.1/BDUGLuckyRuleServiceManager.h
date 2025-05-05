@interface BDUGLuckyRuleServiceManager : NSObject
@property (nonatomic) <BDUGLuckyTimerRuleServiceProtocol> pendantRuleService;
@property (nonatomic) <BDUGLuckyTimerRuleServiceProtocol> timingRuleService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendantRuleService;
- (void)setPendantRuleService:;
- (void)setTimingRuleService:;
- (id)timingRuleService;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
