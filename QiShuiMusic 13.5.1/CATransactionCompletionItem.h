@interface CATransactionCompletionItem : NSObject
- (id)init;
- (void)dealloc;
- (void)invalidate;
+ (id)completionItem;
@end
