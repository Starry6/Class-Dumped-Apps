@interface AWEPLVSlidableSectionConfigModel : AWEBaseApiModel
@property (nonatomic) NSString sectionName;
@property (nonatomic) AWEPLVSectionPaddingModel sectionPadding;
@property (nonatomic) AWEPLVSectionPaddingModel contentPadding;
@property (nonatomic) AWEPLVSectionPaddingModel headerPadding;
@property (nonatomic) AWEPLVSectionPaddingModel scrollViewPadding;
@property (nonatomic) AWEPLVSectionBackgrounColorModel backgroundColor;
@property (nonatomic) BOOL dynamicSpacing;
- (BOOL)dynamicSpacing;
- (id)sectionPadding;
- (id)scrollViewPadding;
- (void)setSectionPadding:;
- (void)setScrollViewPadding:;
- (void)setDynamicSpacing:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void)setContentPadding:;
- (void).cxx_destruct;
- (id)contentPadding;
- (id)headerPadding;
- (void)setHeaderPadding:;
- (void)setSectionName:;
- (id)sectionName;
+ (id)sectionPaddingJSONTransformer;
+ (id)contentPaddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)backgroundColorJSONTransformer;
@end
