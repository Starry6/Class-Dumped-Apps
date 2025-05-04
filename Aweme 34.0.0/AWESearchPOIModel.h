@interface AWESearchPOIModel : AWEBaseApiModel
@property (nonatomic) AWEPOIContentItemModel poiModel;
@property (nonatomic) NSArray highlightPositionInfos;
- (id)poiModel;
- (void)setPoiModel:;
- (id)highlightPositionInfos;
- (void)setHighlightPositionInfos:;
- (void).cxx_destruct;
+ (id)highlightPositionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
