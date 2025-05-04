@interface AWEProfilePadHomeComponent : AWEProfilePadBaseComponent
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
+ (Class)aAWEPadModuleAdapterClass;
@end
