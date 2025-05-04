@interface AWESearchMerchandiseLeaderboard : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) q textSplitIndex;
- (long long)textSplitIndex;
- (void)setTextSplitIndex:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
