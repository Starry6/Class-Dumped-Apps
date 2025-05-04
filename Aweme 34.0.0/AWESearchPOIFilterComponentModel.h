@interface AWESearchPOIFilterComponentModel : AWEDoubleColumnSearchMerchandiseFilterComponentModel
@property (nonatomic) NSArray arrBarConfigInfos;
@property (nonatomic) NSString strSubText;
@property (nonatomic) NSNumber isSubItemInitialUseMaxWidth;
@property (nonatomic) BOOL shouldShowAsManualSelect;
- (void)setArrBarConfigInfos:;
- (void)setStrSubText:;
- (void)setIsSubItemInitialUseMaxWidth:;
- (void)setShouldShowAsManualSelect:;
- (BOOL)shouldShowAsManualSelect;
- (id)isSubItemInitialUseMaxWidth;
- (id)arrBarConfigInfos;
- (id)strSubText;
- (void).cxx_destruct;
+ (BOOL)usePOISearchFilterComponentModelClassWithJSONDictionary:;
+ (id)arrBarConfigInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
