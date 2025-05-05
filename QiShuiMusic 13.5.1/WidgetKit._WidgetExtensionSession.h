@interface WidgetKit._WidgetExtensionSession : _TtCs12_SwiftObject
- (void)getAllCurrentDescriptorsWithCompletion:;
- (void)getPlaceholdersWithRequests:completion:;
- (void)getTimelineFor:into:environment:isPreview:completion:;
- (void)attachPreviewAgentWithFrameworkPath:endpoint:handler:;
- (void)getPlaceholdersWithEnvironment:for:completion:;
- (void)getDescriptorsWithCompletion:;
- (void)getActivitiesWithRequests:completion:;
- (void)handleURLSessionEventsFor:completion:;
- (void)getPlaceholdersForRequests:inEnvironment:completion:;
- (void)invalidate;
- (void)getTimelinesWithRequests:isPreview:completion:;
- (void)getCurrentDescriptorsWithCompletion:;
@end
