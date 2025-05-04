@interface AWEPostPageMissionElement : AWEPostPageCellElement
@property (nonatomic) BOOL isShowTracked;
@property (nonatomic) <AWEPostPageStarAtlasService> starAtlas;
- (id)starAtlas;
- (id)missionCell;
- (BOOL)isShowTracked;
- (void)setIsShowTracked:;
- (void)setupCell:;
- (id)companyTools;
- (void)setStarAtlas:;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)cell;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
