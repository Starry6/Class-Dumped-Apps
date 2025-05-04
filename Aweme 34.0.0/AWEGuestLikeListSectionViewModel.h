@interface AWEGuestLikeListSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEGuestLikeListContainerViewModel parentVM;
@property (nonatomic) AWEGuestHomePageContext pageContext;
@property (nonatomic) AWEGuestLikeListDataController dataController;
- (void)updateDataController;
- (void)setParentVM:;
- (id)parentVM;
- (void)setup;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (id)dataController;
+ (id)viewModelWithModelsArray:pageContext:parentVM:;
@end
