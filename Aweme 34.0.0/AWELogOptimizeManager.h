@interface AWELogOptimizeManager : NSObject
- (void)alogForbidTagList;
- (void)alogForbidList;
- (void)alogDownClockList;
- (unsigned long long)getUpdateVersionLastTime;
- (void)alogTimer;
- (void)alogDidUpload;
- (void)alogDidUploadByUser;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
+ (void)alogSetLogDetail;
+ (id)sharedManager;
@end
