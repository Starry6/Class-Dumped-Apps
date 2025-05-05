@interface IESLiveSaaSFeedSectionController : IGListSectionController
@property (nonatomic) IESLiveSaaSFeedTabModel tabModel;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) IESLiveSaaSFeedViewController feedViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (id)diffIdentifier;
- (id)initWithTabModel:insets:;
- (BOOL)isEqualToDiffableObject:;
- (void)listAdapter:didEndDisplayingSectionController:;
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (void)listAdapter:willDisplaySectionController:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)setFeedViewController:;
- (void)setTabModel:;
- (id)tabModel;
- (void)refresh;
- (void)setInsets:;
- (id)insets;
- (void).cxx_destruct;
- (id)feedViewController;
- (id)sizeForItemAtIndex:;
@end
