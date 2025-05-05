@interface BDUGLuckySaveImageXBridge : BDUGLuckyXBridgeMethod
@property (nonatomic) @? completionHandler;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)methodName;
- (void)image:didFinishSavingWithError:contextInfo:;
@end
