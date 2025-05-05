@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup
@property (nonatomic) CoreDAVResponseItem responseItem;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)setResponseItem:;
- (id)responseItem;
- (id)initWithAccountInfoProvider:taskManager:primaryPropertiesToSet:fallbackPropertiesToSet:atURL:;
- (void)_proppatchAfterFailureCount:;
@end
