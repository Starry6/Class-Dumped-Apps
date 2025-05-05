@interface SFCardSectionFeedback : SFFeedback
@property (nonatomic) <SFCardSection> cardSection;
@property (nonatomic) NSString cardSectionId;
@property (nonatomic) NSString resultId;
- (id)cardSection;
- (void)setCardSection:;
- (id)cardSectionId;
- (id)initWithCoder:;
- (void)setCardSectionId:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)resultId;
- (void)setResultId:;
- (id)initWithCardSection:;
+ (BOOL)supportsSecureCoding;
@end
