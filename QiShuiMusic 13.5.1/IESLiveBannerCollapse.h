@interface IESLiveBannerCollapse : IESLiveDynamicMTLModel
@property (nonatomic) HTSLiveDisplayTextModel title;
@property (nonatomic) IESLiveImage backgroundImage;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) BOOL bannerEnable;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)backgroundImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;
@end
