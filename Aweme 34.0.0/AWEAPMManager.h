@interface AWEAPMManager : NSObject
- (void)bytedSettingDidChange;
- (id)init;
- (void)dealloc;
+ (void)setPerformanceUploadHost:;
+ (void)attchFilter:forKey:;
+ (void)attachInfo:forKey:;
+ (void)enableInternalNetworkRequest:;
+ (void)setupJSONObjectWithDataFunction:;
+ (void)setupInformationWithCustomHandler:;
+ (void)trackerSessionDidChange:;
+ (BOOL)enableToutiaoAPM;
+ (id)signInfo;
+ (void)setupInformation;
+ (id)sharedInstance;
+ (void)start;
+ (void)setUserID:;
+ (void)setUserName:;
@end
