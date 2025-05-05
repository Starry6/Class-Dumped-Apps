@interface IESIMVideoTagModel : IESIMBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) IESIMURLModel iconImageURL;
@property (nonatomic) NSNumber leftRightPadding;
- (id)leftRightPadding;
- (void)setLeftRightPadding:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setType:;
- (void)setTitle:;
- (long long)type;
- (id)title;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)iconImageURL;
- (void)setIconImageURL:;
+ (id)iconImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
