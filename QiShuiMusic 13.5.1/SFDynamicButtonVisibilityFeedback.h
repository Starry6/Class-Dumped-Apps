@interface SFDynamicButtonVisibilityFeedback : SFFeedback
@property (nonatomic) NSArray buttons;
@property (nonatomic) SFCardSection cardSection;
- (id)cardSection;
- (void)setCardSection:;
- (id)initWithCoder:;
- (id)buttons;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setButtons:;
- (id)initWithCardSection:buttons:;
+ (BOOL)supportsSecureCoding;
@end
