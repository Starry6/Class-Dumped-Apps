@interface PLCloudPhotoLibraryError : NSObject
+ (id)userMessageForErrorType:;
+ (id)createErrorWithType:;
+ (id)createErrorWithType:withDebugMessage:;
@end
