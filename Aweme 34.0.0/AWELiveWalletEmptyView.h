@interface AWELiveWalletEmptyView : NSObject
- (void)useEmptyViewEdgeInsetsOn:;
- (id)awelive_emptyPageConfigForState:;
- (id)edgeInsetsForEmptyView;
- (void)useEmptyPageConfigOn:;
- (id)createEmptyViewWithEdgeInset:tapAction:resolveAction:;
@end
