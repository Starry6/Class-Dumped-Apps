@interface AWEWidgetServiceImpl : HTSService
- (void)checkWidgetInstalledWithKind:completion:;
- (void)widgetInfosWithKind:completion:;
- (void)checkWidgetsInstalledCompletion:;
- (void)reloadTimelineForKind:;
- (id)init;
- (void)reloadTimeline;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
