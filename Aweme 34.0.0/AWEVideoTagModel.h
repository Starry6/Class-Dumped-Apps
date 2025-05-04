@interface AWEVideoTagModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) q tagType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWEURLModel iconImageURL;
@property (nonatomic) NSNumber leftRightPadding;
- (id)leftRightPadding;
- (void)setLeftRightPadding:;
- (long long)tagType;
- (void)setTextColor:;
- (long long)type;
- (id)backgroundColor;
- (void)setType:;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (id)textColor;
- (void)setTitle:;
- (id)iconImageURL;
- (void)setIconImageURL:;
- (void)setTagType:;
+ (id)iconImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
