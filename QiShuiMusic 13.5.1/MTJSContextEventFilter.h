@interface MTJSContextEventFilter : NSObject
@property (nonatomic) NSString script;
@property (nonatomic) NSString functionName;
@property (nonatomic) JSContext jsContext;
@property (nonatomic) NSError lastError;
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operationQueue;
- (id)functionName;
- (void).cxx_destruct;
- (void)setLastError:;
- (id)apply:;
- (id)lastError;
- (void)setOperationQueue:;
- (void)setFunctionName:;
- (id)script;
- (void)setScript:;
- (id)jsContext;
- (void)setJsContext:;
- (id)initWithScript:functionName:operationQueue:;
- (id)initWithJSContext:functionName:operationQueue:;
- (void)_applyFilter:promise:;
@end
