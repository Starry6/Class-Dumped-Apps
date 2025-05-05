@interface LNActionExecutorPassthroughDelegate : NSObject
@property (nonatomic) <LNActionExecutorDelegate> delegate;
@property (nonatomic) @? completionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)executor:didPerformActionWithResult:error:;
- (void)executor:didFinishWithResult:error:;
- (void)executor:didCompleteExecutionWithResult:error:;
- (BOOL)executor:shouldRunShowOutputAction:;
- (void)executor:needsActionConfirmationWithRequest:;
- (void)executor:environmentForViewSnippetWithCompletion:;
- (void)executor:preferredContentSizeForViewSnippetWithCompletion:;
- (void)executor:needsConfirmationWithRequest:;
- (void)executor:needsDisambiguationWithRequest:;
- (void)executor:needsValueWithRequest:;
- (id)initWithShowOutputActionDelegate:performCompletionHandler:;
@end
