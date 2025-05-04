@interface AWETokamakLogUploader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)uploadAlogIfCrashed;
+ (void)uploadAlogFromDate:scene:completion:;
+ (BOOL)alogInstanceEnabled;
+ (void)uploadFeedbackAlogFromDate:scene:completion:;
+ (void)uploadKiteLogFromDaysBefore:scene:byUser:callback:;
+ (void)uploadKiteLogByLogPaths:scene:byUser:callback:;
+ (void)uploadKiteLogFromDaysBefore:scene:callback:;
+ (void)uploadKiteLogByLogPaths:scene:callback:;
+ (id)logFilePathOfLastSession;
+ (void)uploadFileByPath:type:uploadFlag:scene:byUser:callback:;
@end
