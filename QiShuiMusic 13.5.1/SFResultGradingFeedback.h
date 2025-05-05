@interface SFResultGradingFeedback : SFResultFeedback
@property (nonatomic) Q grade;
@property (nonatomic) NSString textFeedback;
- (id)initWithCoder:;
- (unsigned long long)grade;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)textFeedback;
- (void)setTextFeedback:;
- (id)initWithResult:grade:;
- (id)initWithResult:grade:textFeedback:;
+ (BOOL)supportsSecureCoding;
@end
