@interface AWEVideoClipperSourceHelper : NSObject
+ (BOOL)needReportSourceInfo;
+ (void)tryToAddSourceInfoInfoAsset:withPublishViewModel:completionHandler:;
+ (void)addSourceInfoIfNeededForAsset:withPublishViewModel:completionHandler:;
@end
