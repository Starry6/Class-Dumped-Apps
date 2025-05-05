@interface IESLiveBannerListModel : IESLiveDynamicMTLModel
@property (nonatomic) NSArray bannerList;
@property (nonatomic) NSString containerUrl;
@property (nonatomic) NSNumber bannerHeight;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) q containerType;
@property (nonatomic) NSArray tokenList;
@property (nonatomic) IESLiveBannerCollapse collapse;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)activityTopRightJSONTransformer;
+ (id)activityVSInteractJSONTransformer;
+ (id)bannerListJSONTransformer;
+ (id)bottomRightJSONTransformer;
+ (id)collapseJSONTransformer;
+ (id)gameLiveMiddleJSONTransformer;
+ (id)giftPaneBottomRightJSONTransformer;
+ (id)giftPaneJSONTransformer;
+ (id)openLiveJSONTransformer;
+ (id)topRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
