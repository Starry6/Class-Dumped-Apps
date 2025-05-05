@interface SFLookupHintRelevancyFeedback : SFFeedback
@property (nonatomic) NSString context;
@property (nonatomic) {_NSRange=QQ} hintRange;
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL discarded;
@property (nonatomic) Q grade;
- (void)setDiscarded:;
- (id)context;
- (id)initWithCoder:;
- (unsigned long long)grade;
- (void)encodeWithCoder:;
- (BOOL)discarded;
- (void).cxx_destruct;
- (void)setGrade:;
- (id)domain;
- (void)setDomain:;
- (void)setContext:;
- (id)hintRange;
- (void)setHintRange:;
- (id)initWithContext:hintRange:domain:discarded:grade:;
+ (BOOL)supportsSecureCoding;
@end
