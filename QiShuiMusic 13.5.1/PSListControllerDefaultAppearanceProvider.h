@interface PSListControllerDefaultAppearanceProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tableViewStyleForListController:;
- (double)estimatedHeightOfRowForCellWithIndexPath:inController:;
- (id)cellForSpecifier:inController:;
- (void)customizeTableView:inContainerView:hostedInSetupController:forListController:;
- (void)listController:updateSectionContentInsetAnimated:isRegularWidth:contentInsetInitialized:contentInsetInitializedApplicator:;
@end
