@interface AWEMessageReachPreCheckResultModel : MTLModel
@property (nonatomic) AWEMessageReachVerifyComponentModel verifyModel;
@property (nonatomic) q checkResult;
@property (nonatomic) q badgeOriginCheckResult;
@property (nonatomic) q bubbleOriginCheckResult;
@property (nonatomic) NSString blockDesc;
@property (nonatomic) NSString componentID;
@property (nonatomic) BOOL precheckTimeOut;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)checkResult;
- (void)setCheckResult:;
- (void)setBlockDesc:;
- (id)blockDesc;
- (void)setVerifyModel:;
- (id)verifyModel;
- (void)setBubbleOriginCheckResult:;
- (long long)badgeOriginCheckResult;
- (void)setBadgeOriginCheckResult:;
- (long long)bubbleOriginCheckResult;
- (BOOL)precheckTimeOut;
- (void)setPrecheckTimeOut:;
- (id)description;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
+ (id)generateSuccessModel:;
+ (id)generateTimeoutModel:;
+ (id)generateBadgeResultModelWithVerifyModel:showResult:badgeTask:;
+ (id)generateBubbleCheckResult:;
+ (long long)getCheckResultWithExceptionInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
