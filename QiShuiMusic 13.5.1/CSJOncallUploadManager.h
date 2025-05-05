@interface CSJOncallUploadManager : NSObject
- (BOOL)textFieldShouldBeginEditing:;
+ (void)removeCoverView;
+ (id)_buildUploadBodyWithRecordId:deviceInfo:logFilePath:;
+ (void)showCoverView;
+ (void)showOncallUploadAlertWithMeta:message:complete:;
+ (void)uploadAdInfoWithId:meta:message:complete:;
@end
