@interface SFWebUIDialog : SFDialog
@property (nonatomic) WebUIAlert alert;
- (id)alert;
- (long long)presentationStyle;
- (void).cxx_destruct;
- (id)newViewControllerRepresentationWithCompletionHandler:;
- (void)didCompleteWithResponse:;
- (BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
- (id)initWithAlert:completionHandler:;
@end
