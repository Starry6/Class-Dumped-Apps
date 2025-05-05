@interface IESLiveSaaSActivityAwardInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage badgeImage;
@property (nonatomic) IESLiveSaaSImage storyTagImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)badgeImageJSONTransformer;
+ (id)storyTagImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
