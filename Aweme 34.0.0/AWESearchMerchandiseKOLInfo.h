@interface AWESearchMerchandiseKOLInfo : AWEBaseApiModel
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString recommendText;
@property (nonatomic) q textSplitIndex;
- (long long)textSplitIndex;
- (void)setTextSplitIndex:;
- (id)recommendText;
- (void)setRecommendText:;
- (void).cxx_destruct;
- (id)avatar;
- (void)setAvatar:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
