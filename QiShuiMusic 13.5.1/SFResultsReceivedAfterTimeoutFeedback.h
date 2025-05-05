@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback
@property (nonatomic) NSArray results;
- (id)initWithResults:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (void)setResults:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
