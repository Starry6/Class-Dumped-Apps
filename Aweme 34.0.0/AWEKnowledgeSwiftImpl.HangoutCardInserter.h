@interface AWEKnowledgeSwiftImpl.HangoutCardInserter : NSObject
- (void)onWillBeginRequestDataWithRequestType:;
- (void)asyncProcessDataArrayWithRequestType:modelArray:args:completion:;
- (void)onDidEndCompletionWithRequestType:response:error:;
- (void)onDidCancelRequestWithRequestType:;
- (id)init;
- (void).cxx_destruct;
@end
