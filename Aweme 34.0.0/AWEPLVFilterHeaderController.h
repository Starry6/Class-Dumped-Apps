@interface AWEPLVFilterHeaderController : AWEPadListReusableViewBaseController
@property (nonatomic) NSDictionary filterMap;
- (void)configView:;
- (void)setFilterMap:;
- (id)filterMap;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (void)configFilterBarSelectStatus:;
- (id)filterMapOriginalDic;
- (void)filterDidSelectWithKey:value:;
- (Class)viewClass;
- (void).cxx_destruct;
@end
