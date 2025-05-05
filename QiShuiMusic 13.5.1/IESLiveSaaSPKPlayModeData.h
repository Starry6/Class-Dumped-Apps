@interface IESLiveSaaSPKPlayModeData : BDDynamicMTLModel
@property (nonatomic) NSNumber mode;
@property (nonatomic) IESLiveSaaSPKPlayModeRaidData raidData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)raidDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
