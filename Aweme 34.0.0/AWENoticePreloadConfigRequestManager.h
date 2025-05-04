@interface AWENoticePreloadConfigRequestManager : NSObject
@property (nonatomic) NSDictionary combineRequestResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)setCombineRequestResult:;
- (void)updatePreloadInfoWithDictionary:;
- (id)combineRequestResult;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoad;
+ (void)updateSettingsWithDictionary:;
+ (id)sharedInstance;
@end
