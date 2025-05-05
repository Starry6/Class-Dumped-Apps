@interface IESLiveSaaSUserNobleInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage nobleBackground;
@property (nonatomic) IESLiveSaaSImage nobleIcon;
@property (nonatomic) NSNumber nobleLevel;
@property (nonatomic) NSString nobleName;
@property (nonatomic) IESLiveSaaSImage nobleIconBackGround;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) IESLiveSaaSImage nobleBigIcon;
@property (nonatomic) IESLiveSaaSImage nobleBorderImage;
@property (nonatomic) NSArray nobleBackGroundColors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)nobleBorderImageJSONTransformer;
+ (id)nobleBackgroundImageJSONTransformer;
+ (id)nobleIconImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
