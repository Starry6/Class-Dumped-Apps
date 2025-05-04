@interface AWESearchNormalCardModel : AWEBaseApiModel
@property (nonatomic) NSString contentOrigin;
@property (nonatomic) AWESearchNormalCardInfo info;
@property (nonatomic) AWESearchNormalCardSummary summary;
@property (nonatomic) AWESearchNormalCardTitle title;
- (void)setInfo:;
- (id)info;
- (id)summary;
- (void)setSummary:;
- (void)setContentOrigin:;
- (void).cxx_destruct;
- (id)contentOrigin;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
