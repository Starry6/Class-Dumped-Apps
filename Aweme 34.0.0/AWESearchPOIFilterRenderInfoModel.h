@interface AWESearchPOIFilterRenderInfoModel : AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel
@property (nonatomic) NSString strBGStartColorHEX;
@property (nonatomic) NSString strBGEndColorHEX;
@property (nonatomic) NSNumber topCornerRadius;
- (void)setTopCornerRadius:;
- (void)setStrBGStartColorHEX:;
- (void)setStrBGEndColorHEX:;
- (id)strBGStartColorHEX;
- (id)strBGEndColorHEX;
- (void).cxx_destruct;
- (id)topCornerRadius;
+ (BOOL)usePOISearchFilterRenderInfoModelClassWithJSONDictionary:;
+ (id)JSONKeyPathsByPropertyKey;
@end
