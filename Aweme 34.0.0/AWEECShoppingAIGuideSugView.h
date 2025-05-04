@interface AWEECShoppingAIGuideSugView : UIView
@property (nonatomic) NSMutableArray sectionArray;
@property (nonatomic) double totalUsableHeight;
@property (nonatomic) NSInteger numsOfSections;
@property (nonatomic) AWEECShoppingAIGuideContext context;
@property (nonatomic) NSArray inputSugArray;
@property (nonatomic) NSArray keywordArray;
- (id)sectionArray;
- (int)numsOfSections;
- (double)totalUsableHeight;
- (void)hideAllSections;
- (id)inputSugArray;
- (id)keywordArray;
- (void)setTotalUsableHeight:;
- (void)setNumsOfSections;
- (void)updateLabels:;
- (void)setInputSugArray:;
- (void)setKeywordArray:;
- (void)setSectionArray:;
- (void)setNumsOfSections:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
@end
