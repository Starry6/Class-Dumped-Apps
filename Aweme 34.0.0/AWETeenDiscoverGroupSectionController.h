@interface AWETeenDiscoverGroupSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isAppear;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)sectionTrackAppear;
- (id)separatorColor;
- (id)init;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (id)inset;
@end
