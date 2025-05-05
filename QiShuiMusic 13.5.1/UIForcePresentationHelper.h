@interface UIForcePresentationHelper : NSObject
+ (id)visualEffectForPresentationPhase:traitCollection:variant:;
+ (id)sourceRectForView:proposedSourceRect:;
+ (id)snapshotViewForSourceView:sourceRect:;
+ (void)applyPhase:toSnapshotView:;
@end
