@interface AWEOFGBridgeMethod : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) NSString methodName;
@property (nonatomic) AWEOFGBridgeContext context;
@property (nonatomic) # paramModelClass;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)setParamModelClass:;
- (void)setHandler:;
- (id)handler;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)methodName;
- (void)setMethodName:;
@end
