@interface EFProcessTransaction : NSObject
- (void).cxx_destruct;
- (id)initWithDescription:;
- (id)description;
- (BOOL)extend;
- (void)invalidate;
+ (id)transactionWithDescription:;
@end
