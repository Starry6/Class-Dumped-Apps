@interface IESLiveSaaSBannerListModel : BDDynamicMTLModel
@property (nonatomic) NSArray bannerList;
@property (nonatomic) NSString containerUrl;
@property (nonatomic) IESLiveSaaSImage animationImage;
@property (nonatomic) NSNumber bannerHeight;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) q containerType;
@property (nonatomic) IESLiveSaaSBannerCollapse collapse;
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
+ (id)retainConsultJSONTransformer;
+ (id)topRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
