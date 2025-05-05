@interface IESLiveAnchorTabLabelChangeModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString afterPoiName;
@property (nonatomic) NSNumber beforePoiID;
@property (nonatomic) NSNumber afterPoiID;
@property (nonatomic) NSNumber fallbackTabType;
@property (nonatomic) NSDictionary degradeTabType;
@property (nonatomic) NSDictionary anchorTabLabel;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fallbackTabType;
- (void)setBeforePoiID:;
- (id)afterPoiID;
- (id)afterPoiName;
- (id)anchorTabLabel;
- (id)beforePoiID;
- (id)degradeTabType;
- (void)setAfterPoiID:;
- (void)setAfterPoiName:;
- (void)setAnchorTabLabel:;
- (void)setDegradeTabType:;
- (void)setFallbackTabType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
