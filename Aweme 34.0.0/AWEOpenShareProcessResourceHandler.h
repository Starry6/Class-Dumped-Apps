@interface AWEOpenShareProcessResourceHandler : NSObject
+ (void)handleResourceWithResp:params:completion:;
+ (void)handleWebResourceWithResp:params:completion:;
+ (id)fileTypeForPath:;
@end
