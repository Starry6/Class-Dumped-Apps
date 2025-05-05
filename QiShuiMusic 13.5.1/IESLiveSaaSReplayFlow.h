@interface IESLiveSaaSReplayFlow : IESLiveSaaSECommerceBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray text;
@property (nonatomic) IESLiveSaaSECommerceImageURLModel pic;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSNumber isUserShop;
+ (id)JSONKeyPathsByPropertyKey;
@end
