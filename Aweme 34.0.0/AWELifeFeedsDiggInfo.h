@interface AWELifeFeedsDiggInfo : AWEBaseApiModel
@property (nonatomic) BOOL userDigged;
@property (nonatomic) q diggCount;
- (long long)diggCount;
- (BOOL)userDigged;
- (void)setUserDigged:;
- (void)setDiggCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
