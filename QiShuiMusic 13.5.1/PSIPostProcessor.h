@interface PSIPostProcessor : NSObject
+ (void)postProcessGroupResults:dedupedGroupResults:query:;
+ (BOOL)_prefer:over:;
@end
