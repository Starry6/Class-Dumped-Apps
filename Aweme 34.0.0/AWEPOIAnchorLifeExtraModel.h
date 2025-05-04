@interface AWEPOIAnchorLifeExtraModel : MTLModel
@property (nonatomic) AWEPOIAnchorTagRateAggInfo tagRateAggInfo;
@property (nonatomic) AWEPOIAnchorBubbleModel bubble;
@property (nonatomic) AWEPOIAnchorVisitHistory visitHistory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagRateAggInfo;
- (void)setTagRateAggInfo:;
- (id)visitHistory;
- (void)setVisitHistory:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
+ (id)JSONKeyPathsByPropertyKey;
@end
