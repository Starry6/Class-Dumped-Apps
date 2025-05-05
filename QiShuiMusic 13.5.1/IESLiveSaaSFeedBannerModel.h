@interface IESLiveSaaSFeedBannerModel : BDDynamicMTLModel
@property (nonatomic) NSNumber bannerID;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString text;
@property (nonatomic) NSString requestId;
@property (nonatomic) HTSBannerADInfoModel adInfo;
@property (nonatomic) NSString coverColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
