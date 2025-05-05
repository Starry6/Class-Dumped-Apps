@interface HTSLiveUser_Border : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q level;
@property (nonatomic) HTSLiveImage thumbIcon;
@property (nonatomic) BOOL hasThumbIcon;
@property (nonatomic) NSString dressId;
+ (id)borderWithIcon:;
+ (id)descriptor;
@end
