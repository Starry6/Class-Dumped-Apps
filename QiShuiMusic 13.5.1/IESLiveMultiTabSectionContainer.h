@interface IESLiveMultiTabSectionContainer : IGListSectionController
@property (nonatomic) IESLiveMultiTabModel tabModel;
@property (nonatomic) BOOL viewLoaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (id)diffIdentifier;
- (id)initWithTabModel:;
- (BOOL)isEqualToDiffableObject:;
- (void)listAdapter:didEndDisplayingSectionController:;
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (void)listAdapter:willDisplaySectionController:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)setTabModel:;
- (void)setViewLoaded:;
- (id)tabModel;
- (void).cxx_destruct;
- (BOOL)viewLoaded;
- (id)sizeForItemAtIndex:;
@end
