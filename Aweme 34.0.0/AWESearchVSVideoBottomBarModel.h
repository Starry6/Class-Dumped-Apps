@interface AWESearchVSVideoBottomBarModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) AWEURLModel posterURL;
@property (nonatomic) NSString linkTo;
- (id)posterURL;
- (void)setPosterURL:;
- (id)linkTo;
- (void)setLinkTo:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
