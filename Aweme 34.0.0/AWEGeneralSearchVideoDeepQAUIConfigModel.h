@interface AWEGeneralSearchVideoDeepQAUIConfigModel : AWEBaseApiModel
@property (nonatomic) NSString backgroundImg;
@property (nonatomic) NSString keywordHighlightColorStart;
@property (nonatomic) NSString keywordHighlightColorEnd;
@property (nonatomic) NSString markPointImg;
@property (nonatomic) NSString titleTextColor;
@property (nonatomic) NSString titleBackgroundColor;
@property (nonatomic) NSString titleLabelIcon;
- (id)backgroundImg;
- (void)setBackgroundImg:;
- (id)markPointImg;
- (void)setKeywordHighlightColorStart:;
- (void)setKeywordHighlightColorEnd:;
- (void)setMarkPointImg:;
- (void)setTitleLabelIcon:;
- (id)keywordHighlightColorStart;
- (id)keywordHighlightColorEnd;
- (id)titleLabelIcon;
- (id)titleTextColor;
- (void).cxx_destruct;
- (void)setTitleTextColor:;
- (void)setTitleBackgroundColor:;
- (id)titleBackgroundColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
