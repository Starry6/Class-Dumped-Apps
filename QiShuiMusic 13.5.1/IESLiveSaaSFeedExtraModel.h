@interface IESLiveSaaSFeedExtraModel : BDDynamicMTLModel
@property (nonatomic) NSDictionary logpbOrig;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double serverCost;
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) q totalNumber;
@property (nonatomic) IESLiveSaaSFeedBannerResponseModel banner;
@property (nonatomic) IESLiveSaaSFeedRankRoundModel rankRoundBanner;
@property (nonatomic) NSString innerFeedUnreadExtra;
@property (nonatomic) NSNumber searchOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)bannerJSONTransformer;
+ (id)rankRoundBannerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
