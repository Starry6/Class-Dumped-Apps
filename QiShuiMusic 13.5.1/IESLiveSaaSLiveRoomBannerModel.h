@interface IESLiveSaaSLiveRoomBannerModel : BDDynamicMTLModel
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSNumber bannerID;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString uri;
@property (nonatomic) IESLiveSaaSImage image;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSNumber bannerType;
@property (nonatomic) Q actionType;
@property (nonatomic) NSNumber frameType;
@property (nonatomic) NSString extraStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)actionTypeJSONTransformer;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
