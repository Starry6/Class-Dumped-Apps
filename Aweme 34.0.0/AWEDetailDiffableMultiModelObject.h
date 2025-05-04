@interface AWEDetailDiffableMultiModelObject : NSObject
@property (nonatomic) NSArray viewModelArray;
@property (nonatomic) double awemeSectionInsetTop;
@property (nonatomic) q showedSections;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)viewModelArray;
- (double)awemeSectionInsetTop;
- (long long)showedSections;
- (void)setShowedSections:;
- (void)appendWithModelArray:;
- (void)setViewModelArray:;
- (void)replaceWithModelArray:;
- (id)initWithViewModelArray:;
- (void)setAwemeSectionInsetTop:;
- (void).cxx_destruct;
@end
