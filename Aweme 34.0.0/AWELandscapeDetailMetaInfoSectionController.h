@interface AWELandscapeDetailMetaInfoSectionController : AWEBaseListSectionController
@property (nonatomic) AWELandscapePageContext context;
@property (nonatomic) <AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)splitScreenContainer;
- (void)setSplitScreenContainer:;
- (void)updateLayout:model:userInfo:;
- (id)separatorColor;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (double)separatorHeight;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)separatorInsets;
@end
