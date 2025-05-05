@interface PHImageResourceChooserPolicyHandler : NSObject
+ (unsigned long long)qualifyResourceInfo:againstPolicy:requestInfo:reversed:tooLargeForPolicy:disqualificationReason:;
+ (BOOL)_passesSquareTableThumbnailTestWithKey:pixelSize:storeClassID:loadingOptions:;
@end
