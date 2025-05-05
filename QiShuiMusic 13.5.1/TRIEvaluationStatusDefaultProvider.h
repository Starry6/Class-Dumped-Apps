@interface TRIEvaluationStatusDefaultProvider : NSObject
- (id)init;
- (id)syncProxyWithErrorHandler:;
- (void).cxx_destruct;
- (BOOL)enumerateActiveEvaluationsForMLRuntimeWithError:block:;
- (id)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:error:block:;
@end
