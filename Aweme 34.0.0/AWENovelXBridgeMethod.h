@interface AWENovelXBridgeMethod : BDXBridgeMethod
@property (nonatomic) NSString novelName;
@property (nonatomic) @? novelHandler;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)setNovelName:;
- (void)setNovelHandler:;
- (id)novelName;
- (id)novelHandler;
- (long long)authType;
- (unsigned long long)engineTypes;
- (void).cxx_destruct;
- (id)methodName;
+ (id)methodName:handler:;
@end
