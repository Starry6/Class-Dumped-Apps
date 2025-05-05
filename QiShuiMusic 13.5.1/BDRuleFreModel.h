@interface BDRuleFreModel : BDRuleModel
@property (nonatomic) NSArray controlParams;
@property (nonatomic) Q checkerType;
@property (nonatomic) Q checkerLimit;
@property (nonatomic) Q checkerInterval;
- (unsigned long long)checkerInterval;
- (void)setCheckerType:;
- (void)appendRecordWithKey:;
- (unsigned long long)checkerLimit;
- (unsigned long long)checkerType;
- (id)controlParams;
- (BOOL)countCheckWithRecords:count:;
- (id)extraCheckCelResult:env:;
- (id)generateFreKeyWithEnv:;
- (id)getRecordsWithKey:;
- (id)initWithDictionary:key:strategy:source:;
- (id)jsonFormat;
- (void)postProcessWithResult:context:;
- (void)setCheckerInterval:;
- (void)setCheckerLimit:;
- (void)setControlParams:;
- (void)storeRecords:withKey:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithDictionary:key:;
@end
