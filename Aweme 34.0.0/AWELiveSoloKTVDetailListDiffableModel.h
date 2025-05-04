@interface AWELiveSoloKTVDetailListDiffableModel : AWELiveSoloKTVDetailDiffableModel
@property (nonatomic) NSArray viewModelArray;
@property (nonatomic) double awemeSectionInsetTop;
- (id)viewModelArray;
- (double)awemeSectionInsetTop;
- (void)appendWithModelArray:;
- (void)setViewModelArray:;
- (void)replaceWithModelArray:;
- (id)initWithViewModelArray:;
- (void)setAwemeSectionInsetTop:;
- (void).cxx_destruct;
@end
