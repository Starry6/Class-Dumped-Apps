@interface AWESearchNetWorkConfig : AWEBaseApiModel
@property (nonatomic) NSString flowRequestPath;
@property (nonatomic) q flowType;
@property (nonatomic) q requestDataCount;
@property (nonatomic) BOOL needPostMethod;
@property (nonatomic) BOOL customAnalysisResponse;
@property (nonatomic) BOOL netStepSign;
@property (nonatomic) NSString searchChannel;
- (id)searchChannel;
- (void)setSearchChannel:;
- (void)setFlowRequestPath:;
- (void)setRequestDataCount:;
- (void)setNetStepSign:;
- (void)setNeedPostMethod:;
- (id)flowRequestPath;
- (long long)requestDataCount;
- (BOOL)netStepSign;
- (BOOL)needPostMethod;
- (void)setCustomAnalysisResponse:;
- (BOOL)customAnalysisResponse;
- (void).cxx_destruct;
- (long long)flowType;
- (void)setFlowType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
