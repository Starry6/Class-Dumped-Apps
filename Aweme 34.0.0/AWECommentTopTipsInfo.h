@interface AWECommentTopTipsInfo : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString darkIconUrl;
@property (nonatomic) NSString lightIconUrl;
@property (nonatomic) Q tipsType;
@property (nonatomic) Q type;
@property (nonatomic) AWECommentTopTipsOptionContent optionContent;
@property (nonatomic) NSString link;
- (id)darkIconUrl;
- (id)lightIconUrl;
- (id)optionContent;
- (unsigned long long)tipsType;
- (void)setTipsType:;
- (void)setLightIconUrl:;
- (void)setDarkIconUrl:;
- (void)setOptionContent:;
- (void)setText:;
- (id)text;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
+ (id)optionContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
