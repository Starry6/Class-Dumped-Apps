@interface AWEECommerceFeedHybridPage : AWEBaseApiModel
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
