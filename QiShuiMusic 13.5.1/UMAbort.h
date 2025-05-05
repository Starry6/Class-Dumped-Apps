@interface UMAbort : NSObject
+ (void)abortWithReason:;
+ (void)abortIfNotEntitled:operation:;
@end
