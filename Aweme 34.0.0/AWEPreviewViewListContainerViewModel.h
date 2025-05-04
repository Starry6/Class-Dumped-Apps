@interface AWEPreviewViewListContainerViewModel : AWEBaseListViewModel
@property (nonatomic) NSString componentName;
@property (nonatomic) NSString bizUIName;
@property (nonatomic) NSArray viewList;
- (void)fetchListData;
- (void)setupViewModel;
- (id)bizUIName;
- (void)setBizUIName:;
- (void)setViewList:;
- (id)viewList;
- (id)componentName;
- (void).cxx_destruct;
- (void)setComponentName:;
@end
