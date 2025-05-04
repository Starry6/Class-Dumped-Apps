@interface AWEEcomSearchResultPageData : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEEcomSearchResultFeedLayer feedLayer;
@property (nonatomic) AWEEcomSearchResultOuterCardLayer outerCardLayer;
@property (nonatomic) AWEEcomSearchResultSuspensionLayer suspensionLayer;
@property (nonatomic) AWEEcomSearchResultPageStyle style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)suspensionLayer;
- (id)feedLayer;
- (id)outerCardLayer;
- (void)fillMerchandiseResp:;
- (void)setSuspensionLayer:;
- (void)setFeedLayer:;
- (void)setOuterCardLayer:;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)styleJSONTransformer;
+ (id)feedLayerJSONTransformer;
+ (id)outerCardLayerJSONTransformer;
+ (id)suspensionLayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
