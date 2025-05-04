@interface AWELocationManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> uploadTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)requestPermission;
- (void)accountPrivacyPolicyAgreeNoti:;
- (void)p_checkPrivacyAndUploadDeivceInfo;
- (id)uploadTimer;
- (void)startUploadLocationChecker;
- (void)fetchLocations:;
- (void)setUploadTimer:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)showLocationRequestAlertWithResultBlock:cancelBlock:;
+ (void)updateLocation:completion:;
+ (void)presentLocationPickerWithModel:completion:;
+ (void)hideLocation:completion:;
+ (void)startUploadLocationLoopImp;
+ (id)sharedInstance;
+ (void)updateLocation;
@end
