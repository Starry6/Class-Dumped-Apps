@interface AWEContentEvalScoreModel : NSObject
@property (nonatomic) q score;
@property (nonatomic) q ruleVersion;
@property (nonatomic) double timestamp;
- (long long)ruleVersion;
- (void)setRuleVersion:;
- (double)timestamp;
- (void)setScore:;
- (void)encodeWithCoder:;
- (id)initWithScore:;
- (long long)score;
- (void)setTimestamp:;
- (id)initWithCoder:;
@end
