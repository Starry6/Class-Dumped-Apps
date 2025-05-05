@interface DDScannerService : NSObject
+ (void)cancelJob:;
+ (long long)scanString:completionBlock:;
+ (id)scanString:;
+ (void)appendWatchOSLinksToString:;
+ (id)scanString:range:configuration:;
+ (id)scanQuery:configuration:;
+ (long long)scanString:range:configuration:completionBlock:;
+ (long long)scanQuery:configuration:completionBlock:;
@end
