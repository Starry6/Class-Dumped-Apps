@interface AWENearbySkyLightCardModel : MTLModel
@property (nonatomic) NSString skyLightTitle;
@property (nonatomic) NSArray lifeServiceEntries;
@property (nonatomic) NSArray poiCollectList;
@property (nonatomic) NSArray poiRecomendList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiRecomendList;
- (id)poiCollectList;
- (id)skyLightTitle;
- (void)setSkyLightTitle:;
- (id)lifeServiceEntries;
- (void)setLifeServiceEntries:;
- (void)setPoiCollectList:;
- (void)setPoiRecomendList:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)lifeServiceEntriesJSONTransformer;
+ (id)poiCollectListJSONTransformer;
+ (id)poiRecomendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
