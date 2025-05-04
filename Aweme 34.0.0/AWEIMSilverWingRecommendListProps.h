@interface AWEIMSilverWingRecommendListProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? didClickRecommendBlock;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (nonatomic) NSArray viewModelArray;
- (id)viewModelArray;
- (void)setViewModelArray:;
- (void)setBackgroundImageIsBright:;
- (BOOL)backgroundImageIsBright;
- (void)setDidClickRecommendBlock:;
- (id)didClickRecommendBlock;
- (void).cxx_destruct;
- (BOOL)hasBackgroundImage;
- (void)setHasBackgroundImage:;
@end
