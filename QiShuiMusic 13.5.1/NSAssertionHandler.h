@interface NSAssertionHandler : NSObject
- (void)HMDP_handleFailureInFunction:file:lineNumber:description:;
- (void)HMDP_handleFailureInMethod:object:file:lineNumber:description:;
- (void)handleFailureInMethod:object:file:lineNumber:description:;
- (void)handleFailureInFunction:file:lineNumber:description:;
+ (id)currentHandler;
@end
