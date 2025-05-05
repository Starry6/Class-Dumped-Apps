@interface HTSLiveBonus : IESLivePBBaseMessage
@property (nonatomic) q bonusType;
@property (nonatomic) HTSLiveBonusAuthor author;
@property (nonatomic) BOOL hasAuthor;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString text;
@property (nonatomic) NSString style;
@property (nonatomic) HTSLiveBonusCommerce commerceInfo;
@property (nonatomic) BOOL hasCommerceInfo;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString token;
@property (nonatomic) q source;
@property (nonatomic) HTSLiveImage label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) q sceneId;
@property (nonatomic) BOOL maybeCarp;
@property (nonatomic) q countdownSecond;
+ (id)descriptor;
@end
