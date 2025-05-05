@interface QQOpenApiUtility : NSObject
+ (id)UTF8StringWithBase64String:;
+ (id)_encodeUrlWithBundleId:;
+ (id)_encodeUrlWithSdkv:;
+ (id)base64EncodedStringWithData:;
+ (id)base64EncodedStringWithUTF8String:;
+ (void)cgiRequestGetSdkConfig:;
+ (id)dataWithBase64EncodedString:;
+ (BOOL)openTimUrl:;
+ (int)openURL:timURL:completionHandler:;
+ (int)openUniversallinkIfNeed:completionHandler:;
+ (int)openUniversallinkIfNeed:timUrl:completionHandler:;
+ (id)safeUrlBase64Decode:;
+ (id)safeUrlBase64Encode:;
+ (int)openURL:;
+ (BOOL)canOpenURL:;
+ (int)openURL:completionHandler:;
@end
