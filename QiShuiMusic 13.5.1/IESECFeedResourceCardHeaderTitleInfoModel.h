@interface IESECFeedResourceCardHeaderTitleInfoModel : MTLModel
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) q textSize;
@property (nonatomic) IESECFeedResourceCardMarginModel margin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setText:;
- (id)icon;
- (id)margin;
- (void)setMargin:;
- (void)setTextColor:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)textColor;
- (id)text;
- (long long)textSize;
- (void)setTextSize:;
+ (id)marginJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
