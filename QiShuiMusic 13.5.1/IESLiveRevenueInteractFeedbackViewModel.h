@interface IESLiveRevenueInteractFeedbackViewModel : NSObject
@property (nonatomic) BOOL selectedWillNotPKAgain;
@property (nonatomic) <IESLiveRevenueInteractFeedbackAPI> feedbackAPI;
@property (nonatomic) @? baseParamsBlock;
@property (nonatomic) @? extraParamsBlock;
@property (nonatomic) q source;
@property (nonatomic) NSString trackSource;
@property (nonatomic) NSString categoryTitle;
@property (nonatomic) <IESLiveRevenueInteractFeedbackListModel> listModel;
@property (nonatomic) BOOL contentEditing;
@property (nonatomic) NSArray allCategories;
@property (nonatomic) NSMutableArray selectedDislikeReasons;
@property (nonatomic) IssueCategory selectedCategory;
@property (nonatomic) NSMutableArray selectedIssues;
@property (nonatomic) BOOL allowMultiSelectCategory;
@property (nonatomic) NSMutableArray selectedCategorys;
@property (nonatomic) IssueCategoryV2 selectedOptimusCategory;
@property (nonatomic) IssueCategoryV2 selectedOptimusIssue;
@property (nonatomic) Q scene;
- (void)setTrackSource:;
- (id)baseParamsBlock;
- (void)setFeedbackAPI:;
- (BOOL)allowMultiSelectCategory;
- (BOOL)contentEditing;
- (id)extraParamsBlock;
- (id)feedbackAPI;
- (void)fetchFeedbackCategoriesWithExtraParams:completeBlock:;
- (id)initWithAPI:scene:;
- (id)selectedCategory;
- (id)selectedCategorys;
- (id)selectedDislikeReasons;
- (id)selectedIssueContent;
- (id)selectedIssues;
- (id)selectedOptimusCategory;
- (id)selectedOptimusIssue;
- (BOOL)selectedWillNotPKAgain;
- (void)setAllCategories:;
- (void)setAllowMultiSelectCategory:;
- (void)setBaseParamsBlock:;
- (void)setContentEditing:;
- (void)setExtraParamsBlock:;
- (void)setListModel:;
- (void)setSelectedCategory:;
- (void)setSelectedCategorys:;
- (void)setSelectedDislikeReasons:;
- (void)setSelectedIssues:;
- (void)setSelectedOptimusCategory:;
- (void)setSelectedOptimusIssue:;
- (void)setSelectedWillNotPKAgain:;
- (id)trackSource;
- (void)uploadFeedback;
- (void)uploadFeedbackWithCompletion:;
- (void)setScene:;
- (unsigned long long)scene;
- (id)listModel;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
- (id)categoryTitle;
- (id)allCategories;
- (void)setCategoryTitle:;
@end
