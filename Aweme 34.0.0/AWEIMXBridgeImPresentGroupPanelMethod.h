@interface AWEIMXBridgeImPresentGroupPanelMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)didCreateGroupWithResult:;
- (void)__invokeBlockWithResult:status:;
- (void)__didCreateGroupWithResult:;
- (long long)authType;
- (id)completionHandler;
- (void)setCompletionHandler:;
- (id)methodName;
+ (id)metaInfo;
@end
