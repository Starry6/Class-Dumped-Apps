@interface AWEMusicChartItemModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel itemInfo;
@property (nonatomic) NSNumber heat;
- (void)setHeat:;
- (id)heat;
- (void)setItemInfo:;
- (id)itemInfo;
- (void).cxx_destruct;
+ (id)itemInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
