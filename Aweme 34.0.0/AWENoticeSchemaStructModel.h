@interface AWENoticeSchemaStructModel : IESIMBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString leftText;
@property (nonatomic) NSString rightText;
@property (nonatomic) NSDictionary uiInfo;
- (id)rightTextColor;
- (id)uiInfo;
- (void)setUiInfo:;
- (id)leftTextColor;
- (id)leftIconUrl;
- (id)uiInfoUnderTheme;
- (id)textColorForKey:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (id)leftText;
- (id)rightText;
- (void)setLeftText:;
- (void)setRightText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
