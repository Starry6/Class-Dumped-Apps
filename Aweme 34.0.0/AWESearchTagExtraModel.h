@interface AWESearchTagExtraModel : AWEBaseApiModel
@property (nonatomic) q starNewStyle;
@property (nonatomic) AWESearchTagExtraStarUrlModel fullColorStarUrl;
@property (nonatomic) AWESearchTagExtraStarUrlModel fullNoColorStarUrl;
@property (nonatomic) AWESearchTagExtraStarUrlModel halfColorStarUrl;
@property (nonatomic) AWESearchTagExtraStarUrlModel scoreIconUrl;
@property (nonatomic) AWESearchTagExtraStarUrlModel scoreIconUrlDark;
@property (nonatomic) AWESearchTagExtraStarUrlModel backgroundIconUrl;
@property (nonatomic) AWESearchTagExtraStarUrlModel backgroundIconUrlDark;
- (long long)starNewStyle;
- (void)setStarNewStyle:;
- (id)fullColorStarUrl;
- (void)setFullColorStarUrl:;
- (id)fullNoColorStarUrl;
- (void)setFullNoColorStarUrl:;
- (id)halfColorStarUrl;
- (void)setHalfColorStarUrl:;
- (id)scoreIconUrl;
- (void)setScoreIconUrl:;
- (id)scoreIconUrlDark;
- (void)setScoreIconUrlDark:;
- (id)backgroundIconUrl;
- (void)setBackgroundIconUrl:;
- (id)backgroundIconUrlDark;
- (void)setBackgroundIconUrlDark:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
