@interface WBSJSCallbackHandler : NSObject
@property (nonatomic) ^{OpaqueJSContext=} globalContext;
@property (nonatomic) JSValue jsValue;
- (void)dealloc;
- (void).cxx_destruct;
- (id)call;
- (id).cxx_construct;
- (id)initWithCallbackFunction:errorReporter:context:;
- (id)initWithErrorReporter:context:;
- (id)initWithPromiseResolveFunction:rejectFunction:context:;
- (id)globalContext;
- (id)jsValue;
- (void)reportErrorWithMessage:;
- (id)callWithArgument:;
- (id)callWithArgument:argument:;
- (id)callWithArgument:argument:argument:;
@end
