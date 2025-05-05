@interface IESLiveSaaSEpisodePremierePlay : BDDynamicMTLModel
@property (nonatomic) NSArray highlightsArray;
@property (nonatomic) q playType;
@property (nonatomic) q startTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)highlightsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
