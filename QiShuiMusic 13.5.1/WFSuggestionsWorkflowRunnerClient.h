@interface WFSuggestionsWorkflowRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)initWithINShortcut:executionContext:;
- (id)initWithLinkAction:bundleIdentifier:resultSurface:;
- (id)initWithINShortcut:executionContext:remoteDialogPresenterEndpoint:;
+ (id)allSuggestionsRunSources;
@end
