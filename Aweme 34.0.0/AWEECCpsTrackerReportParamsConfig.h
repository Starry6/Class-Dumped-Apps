@interface AWEECCpsTrackerReportParamsConfig : MTLModel
@property (nonatomic) NSString paramKey;
@property (nonatomic) NSString urlMapName;
@property (nonatomic) NSArray rules;
@property (nonatomic) NSString checkTypeOp;
@property (nonatomic) BOOL optional;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramKey;
- (void)setParamKey:;
- (id)urlMapName;
- (void)setUrlMapName:;
- (id)checkTypeOp;
- (void)setCheckTypeOp:;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
- (void)setOptional:;
- (BOOL)optional;
+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
