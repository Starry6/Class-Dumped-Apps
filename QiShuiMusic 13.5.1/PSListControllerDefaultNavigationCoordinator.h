@interface PSListControllerDefaultNavigationCoordinator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)listControllerShouldNotDeselectAfterAppearing:;
- (void)listController:pushViewController:givenRootController:withModalStylePopupStateApplicator:animated:;
- (BOOL)listControllerShouldDeselectAfterFormSheetDisappearance:givenRootController:;
- (BOOL)listControllerIsOnTopOfNavigationStack:searchTopMostViewControllerChildren:;
@end
