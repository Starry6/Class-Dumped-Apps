@interface IESLiveSaaSFeedBannerResponseModel : BDDynamicMTLModel
@property (nonatomic) NSArray banners;
@property (nonatomic) q total;
@property (nonatomic) q bannersType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)bannersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
