@interface IESLiveSaaSLinkMicContributeListModel : BDDynamicMTLModel
@property (nonatomic) NSArray contributeList;
@property (nonatomic) IESLiveSaaSLinkMicContributeRankModel selfInfo;
@property (nonatomic) NSString currency;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)contributeListJSONTransformer;
+ (id)selfInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
