@interface ABUUValueRule : NSObject
@property (nonatomic) NSString ruleId;
@property (nonatomic) Q jsMode;
@property (nonatomic) Q type;
@property (nonatomic) double upper;
@property (nonatomic) double lower;
@property (nonatomic) NSDictionary groupTimes;
- (id)groupTimes;
- (id)initWithDic:;
- (unsigned long long)jsMode;
- (id)parseRuleToDic;
- (long long)refreshTimeForLabel:;
- (void)setGroupTimes:;
- (void)setJsMode:;
- (void)setLower:;
- (void)setUpper:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setRuleId:;
- (id)ruleId;
- (double)lower;
- (double)upper;
@end
