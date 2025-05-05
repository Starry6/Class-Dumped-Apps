@interface ICWidget : NSObject
- (void)reloadTimelinesWithReason:;
- (void)reloadTimelineForKind:reason:;
+ (id)sharedWidget;
@end
