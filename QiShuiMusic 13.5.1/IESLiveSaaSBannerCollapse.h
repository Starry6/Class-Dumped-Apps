@interface IESLiveSaaSBannerCollapse : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSDisplayTextModel title;
@property (nonatomic) IESLiveSaaSImage backgroundImage;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) BOOL bannerEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)backgroundImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;
@end
