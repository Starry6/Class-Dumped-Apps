@interface CSTopHitQueryContext : CSUserQueryContext
@property (nonatomic) q maxItemCount;
- (long long)maxItemCount;
- (void)setMaxItemCount:;
+ (id)topHitQueryContextWithCurrentSuggestion:;
+ (id)topHitQueryContext;
@end
