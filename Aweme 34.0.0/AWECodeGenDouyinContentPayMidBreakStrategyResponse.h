@interface AWECodeGenDouyinContentPayMidBreakStrategyResponse : AWEBaseResponseModel
@property (nonatomic) BOOL nextReqCurrentTime;
@property (nonatomic) NSInteger nextReqAdType;
@property (nonatomic) q forceAdPlayTime;
@property (nonatomic) BOOL requestLocalAlgorithmPackage;
- (BOOL)nextReqCurrentTime;
- (void)setNextReqCurrentTime:;
- (int)nextReqAdType;
- (void)setNextReqAdType:;
- (long long)forceAdPlayTime;
- (void)setForceAdPlayTime:;
- (BOOL)requestLocalAlgorithmPackage;
- (void)setRequestLocalAlgorithmPackage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
