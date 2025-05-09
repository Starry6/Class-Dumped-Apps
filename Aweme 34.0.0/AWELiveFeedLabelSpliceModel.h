@interface AWELiveFeedLabelSpliceModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) AWEURLModel backgroundImage;
@property (nonatomic) AWEURLModel iconImage;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) q iconWidth;
@property (nonatomic) q iconHeight;
@property (nonatomic) q iconRaduis;
@property (nonatomic) q textFrontSize;
@property (nonatomic) q textFrontBold;
@property (nonatomic) q textFrontItalic;
- (long long)textFrontSize;
- (long long)textFrontBold;
- (long long)textFrontItalic;
- (long long)iconRaduis;
- (void)setIconRaduis:;
- (void)setTextFrontSize:;
- (void)setTextFrontBold:;
- (void)setTextFrontItalic:;
- (id)backgroundImage;
- (id)iconImage;
- (void)setBackgroundImage:;
- (void)setIconImage:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (long long)iconWidth;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
- (long long)iconHeight;
- (void)setIconHeight:;
- (void)setIconWidth:;
+ (id)labelBackgroundImageJSONTransformer;
+ (id)labelIconImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
