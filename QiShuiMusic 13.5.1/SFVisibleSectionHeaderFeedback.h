@interface SFVisibleSectionHeaderFeedback : SFFeedback
@property (nonatomic) SFResultSection section;
@property (nonatomic) Q headerType;
- (id)initWithSection:headerType:;
- (void)setHeaderType:;
- (unsigned long long)headerType;
- (id)initWithCoder:;
- (void)setSection:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)section;
+ (BOOL)supportsSecureCoding;
@end
