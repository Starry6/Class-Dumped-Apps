@interface MPMiddlewareOperationMap : NSObject
- (id)operationsForMiddleware:;
- (id)allOperations;
- (void).cxx_destruct;
- (id)_init;
- (id)allMiddleware;
+ (id)mapForRequest:;
@end
