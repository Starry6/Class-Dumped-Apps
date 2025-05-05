@interface HTSShareServiceUtils : NSObject
+ (id)topViewControllerForController:;
+ (id)cancelledErrorWithLocalizedDescription:;
+ (id)compressImageForWeiXin:;
+ (id)dataFromImage:withMaxSize:maxDataSize:;
+ (id)stringByURLEncodingString:;
+ (void)swizzleClass:withSelector:usingBlock:;
+ (id)unknownErrorWithLocalizedDescription:;
+ (id)topViewController;
+ (id)cancelledError;
@end
