@interface SFResultFeedback : SFFeedback
@property (nonatomic) SFSearchResult result;
- (id)result;
- (id)initWithResult:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setResult:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
