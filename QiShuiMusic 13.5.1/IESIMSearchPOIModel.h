@interface IESIMSearchPOIModel : IESIMBaseApiModel
@property (nonatomic) IESIMPOIContentItemModel poiModel;
@property (nonatomic) NSArray highlightPositionInfos;
- (id)highlightPositionInfos;
- (id)poiModel;
- (void)setHighlightPositionInfos:;
- (void)setPoiModel:;
- (void).cxx_destruct;
+ (id)highlightPositionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
