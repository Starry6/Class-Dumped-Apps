@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback
@property (nonatomic) q productPageResult;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)productPageResult;
- (void)setProductPageResult:;
- (id)initWithProductPageResult:;
+ (BOOL)supportsSecureCoding;
@end
