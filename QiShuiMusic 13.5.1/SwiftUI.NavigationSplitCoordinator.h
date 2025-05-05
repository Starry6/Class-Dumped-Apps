@interface SwiftUI.NavigationSplitCoordinator : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)splitViewController:willChangeToDisplayMode:;
- (void)splitViewController:willShowColumn:;
- (void)splitViewController:willHideColumn:;
- (long long)splitViewController:topColumnForCollapsingToProposedTopColumn:;
- (long long)splitViewController:displayModeForExpandingToProposedDisplayMode:;
@end
