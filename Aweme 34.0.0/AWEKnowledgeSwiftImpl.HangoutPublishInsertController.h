@interface AWEKnowledgeSwiftImpl.HangoutPublishInsertController : AWEDCFeedBaseController
- (void)task:didAppendWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)task:progressDidChangeWithInfo:;
- (void)task:didPendingAtStage:error:;
- (void)task:cancelWithResult:;
- (void)enterContainerWithModel:;
- (void)onLoadPlaceholderDataEndWithResult:placeholderData:;
- (void)onFetchListDataEndWithReason:response:error:;
- (id)init;
- (void).cxx_destruct;
@end
