@interface AWEPzVerifyResultModel : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) q verifyResult;
@property (nonatomic) NSString hitStrategyType;
@property (nonatomic) NSString hitStrategyID;
@property (nonatomic) NSString errorDesc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)verifyResult;
- (id)hitStrategyType;
- (id)hitStrategyID;
- (void)setVerifyResult:;
- (void)setHitStrategyType:;
- (void)setHitStrategyID:;
- (void)setSuccess:;
- (id)errorDesc;
- (id)description;
- (void).cxx_destruct;
- (void)setErrorDesc:;
- (BOOL)success;
+ (id)instanceWithVerifyResult:hitStrategyType:hitStrategyID:;
@end
