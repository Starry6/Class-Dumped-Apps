@interface IDSTransactionLogTaskHandler : NSObject
- (id)_init;
- (void)perform;
+ (id)handlerWithTask:delegate:queue:;
@end
