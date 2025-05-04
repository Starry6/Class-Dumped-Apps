@interface AWENearbyTrackVerifyResultModel : NSObject
@property (nonatomic) AWENearbyTrackVerifyRuleModel ruleModel;
@property (nonatomic) Q verfiyResult;
@property (nonatomic) NSString reason;
@property (nonatomic) NSDictionary errorParams;
@property (nonatomic) NSDictionary coverErrorParams;
@property (nonatomic) NSArray nullCheckErrorParams;
@property (nonatomic) NSDictionary resultParams;
- (void)setErrorParams:;
- (id)errorParams;
- (void)setRuleModel:;
- (id)ruleModel;
- (void)setResultParams:;
- (void)setVerfiyResult:;
- (void)setCoverErrorParams:;
- (void)setNullCheckErrorParams:;
- (unsigned long long)verfiyResult;
- (id)coverErrorParams;
- (id)resultParams;
- (id)nullCheckErrorParams;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
@end
