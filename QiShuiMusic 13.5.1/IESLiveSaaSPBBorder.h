@interface IESLiveSaaSPBBorder : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q level;
@property (nonatomic) IESLiveSaaSPBImage thumbIcon;
@property (nonatomic) BOOL hasThumbIcon;
@property (nonatomic) NSString dressId;
+ (id)borderWithIcon:;
+ (id)descriptor;
@end
