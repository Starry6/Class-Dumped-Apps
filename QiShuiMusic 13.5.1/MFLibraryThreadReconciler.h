@interface MFLibraryThreadReconciler : NSObject
- (void)reconcileAllObjectsWithWindow:;
- (void).cxx_destruct;
- (id)initWithHookRegistry:persistence:;
- (void)reconcileWithThreadsWithConversationIDs:window:;
@end
