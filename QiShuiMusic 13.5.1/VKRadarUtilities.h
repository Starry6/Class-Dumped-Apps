@interface VKRadarUtilities : NSObject
+ (void)promptUserToFileBugWithAlertMessage:bugTitle:bugDescription:;
+ (void)createRadarWithTitle:description:componentName:componentVersion:componentID:;
+ (void)createRadarWithTitle:description:componentName:componentVersion:componentID:keywordIDs:attachmentURLs:includeSysdiagnose:;
@end
