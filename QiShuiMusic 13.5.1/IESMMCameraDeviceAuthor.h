@interface IESMMCameraDeviceAuthor : NSObject
+ (BOOL)checkPlayBackAndRecordCategory;
+ (BOOL)checkPlayBackAndRecordCategoryWithCategoryOption:;
+ (BOOL)checkPlayBackCategory;
+ (id)getPortTypeInString;
+ (BOOL)isCameraAuth;
+ (BOOL)isMicAuth;
+ (unsigned long long)reduceCategoryOption:;
+ (void)cameraAuthorzied:;
+ (void)microphoneAuthorzied:;
+ (BOOL)isMicNowAvailableV2;
+ (BOOL)deactiveAudioSession;
@end
