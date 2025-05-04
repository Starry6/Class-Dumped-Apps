@interface AWEMixCreateRecommendTipModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) NSString mainTips;
@property (nonatomic) NSString vvTips;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)mainTips;
- (void)setMainTips:;
- (id)vvTips;
- (void)setVvTips:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
