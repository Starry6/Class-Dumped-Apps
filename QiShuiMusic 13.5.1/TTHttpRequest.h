@interface TTHttpRequest : NSObject
@property (nonatomic) BOOL iesim_forceIgnore_X_TT_TOKEN;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSDictionary allHTTPHeaderFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary serializerTimeInfo;
@property (nonatomic) NSMutableDictionary filterObjectsTimeInfo;
@property (nonatomic) NSMutableDictionary requestInfo;
@property (nonatomic) NSDictionary webviewInfo;
@property (nonatomic) BOOL isSerializedOnMainThread;
@property (nonatomic) NSString HTTPMethod;
@property (nonatomic) NSURL URL;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) NSData HTTPBody;
@property (nonatomic) NSString uploadFilePath;
@property (nonatomic) NSDictionary allHTTPHeaderFields;
@property (nonatomic) BOOL followRedirect;
@property (nonatomic) BOOL shouldReportLog;
@property (nonatomic) BOOL bypassProxy;
@property (nonatomic) TTAuthCredentials authCredentials;
@property (nonatomic) NSDate startBizTime;
@property (nonatomic) Q taskId;
@property (nonatomic) BOOL delayedInBackground;
@property (nonatomic) NSDate delayedInBackgroundStartTime;
@property (nonatomic) NSDate delayedInBackgroundEndTime;
@property (nonatomic) NSInteger foregroundRequestCount;
@property (nonatomic) NSDate modifyTaskBlockStartTime;
@property (nonatomic) NSDate modifyTaskBlockEndTime;
- (void)setBypassProxy:;
- (id)authCredentials;
- (void)setWebviewInfo:;
- (BOOL)shouldReportLog;
- (BOOL)bypassProxy;
- (BOOL)delayedInBackground;
- (id)delayedInBackgroundEndTime;
- (id)delayedInBackgroundStartTime;
- (id)filterObjectsTimeInfo;
- (BOOL)followRedirect;
- (int)foregroundRequestCount;
- (BOOL)iesim_forceIgnore_X_TT_TOKEN;
- (BOOL)isSerializedOnMainThread;
- (id)modifyTaskBlockEndTime;
- (id)modifyTaskBlockStartTime;
- (id)serializerTimeInfo;
- (void)setAuthCredentials:;
- (void)setDelayedInBackground:;
- (void)setDelayedInBackgroundEndTime:;
- (void)setDelayedInBackgroundStartTime:;
- (void)setFilterObjectsTimeInfo:;
- (void)setFollowRedirect:;
- (void)setForegroundRequestCount:;
- (void)setIesim_forceIgnore_X_TT_TOKEN:;
- (void)setIsSerializedOnMainThread:;
- (void)setModifyTaskBlockEndTime:;
- (void)setModifyTaskBlockStartTime:;
- (void)setSerializerTimeInfo:;
- (void)setShouldReportLog:;
- (void)setStartBizTime:;
- (void)setUploadFilePath:;
- (id)startBizTime;
- (id)uploadFilePath;
- (id)webviewInfo;
- (id)init;
- (id)HTTPBody;
- (unsigned long long)taskId;
- (double)timeoutInterval;
- (void)setHTTPMethod:;
- (void).cxx_destruct;
- (void)setTimeoutInterval:;
- (void)setHTTPBody:;
- (id)HTTPMethod;
- (void)setURL:;
- (id)URL;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:;
- (void)setTaskId:;
- (id)requestInfo;
- (void)setRequestInfo:;
@end
