@interface SGMailIntelligenceUnsubscriptionRule : NSObject
@property (nonatomic) q unsubscriptionRuleField;
@property (nonatomic) NSString value;
@property (nonatomic) NSNumber mailCount;
@property (nonatomic) NSNumber score;
- (id)score;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)copyWithZone:;
- (id)initWithUnsubscriptionRuleField:value:mailCount:score:;
- (id)initWithUnsubscriptionRuleField:tokenCounts:;
- (long long)unsubscriptionRuleField;
- (id)mailCount;
+ (BOOL)supportsSecureCoding;
+ (id)prettyNameForUnsubscriptionRuleField:;
@end
