@interface PHImageResourceChooserBestPolicyHandler : PHImageResourceChooserPolicyHandler
+ (unsigned long long)qualifyResourceInfo:againstPolicy:requestInfo:reversed:tooLargeForPolicy:disqualificationReason:;
+ (BOOL)_imageResourceIsUndecodableBasedOnMetadata:asset:loggingPrefix:;
@end
