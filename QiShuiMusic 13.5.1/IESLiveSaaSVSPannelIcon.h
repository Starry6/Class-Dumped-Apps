@interface IESLiveSaaSVSPannelIcon : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage spLandscapeIcon;
@property (nonatomic) IESLiveSaaSImage spVerticalIcon;
@property (nonatomic) IESLiveSaaSImage landscapeVerticalSwitchIcon;
@property (nonatomic) IESLiveSaaSImage lockScreenIcon;
@property (nonatomic) IESLiveSaaSImage landscapeMoreIcon;
@property (nonatomic) IESLiveSaaSImage verticalMoreIcon;
@property (nonatomic) IESLiveSaaSImage landscapeCommentIcon;
@property (nonatomic) IESLiveSaaSImage verticalCommentIcon;
@property (nonatomic) IESLiveSaaSImage verticalLandscapeSwitchIcon;
@property (nonatomic) IESLiveSaaSImage verticalLockScreenIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)verticalMoreIconJSONTransformer;
+ (id)landscapeCommentIconJSONTransformer;
+ (id)landscapeMoreIconJSONTransformer;
+ (id)landscapeVerticalSwitchIconJSONTransformer;
+ (id)lockScreenIconJSONTransformer;
+ (id)spLandscapeIconJSONTransformer;
+ (id)spVerticalIconJSONTransformer;
+ (id)verticalCommentIconJSONTransformer;
+ (id)verticalLandscapeSwitchIconJSONTransformer;
+ (id)verticalLockScreenIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
