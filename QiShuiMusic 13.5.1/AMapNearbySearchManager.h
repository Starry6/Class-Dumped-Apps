@interface AMapNearbySearchManager : NSObject
@property (nonatomic) double uploadTimeInterval;
@property (nonatomic) <AMapNearbySearchManagerDelegate> delegate;
@property (nonatomic) BOOL isAutoUploading;
- (BOOL)isAutoUploading;
- (BOOL)clearUserInfoWithID:;
- (void)getReformerWithUploadInfo:;
- (void)invokeClearActionDelegateWithError:;
- (void)invokeUploadActionDelegateWithError:;
- (BOOL)isUploadTooFrequently;
- (BOOL)isUserIDValid:;
- (void)onUploadAction;
- (void)performClearingWithUserID:;
- (void)performUploadingWithUserInfo:;
- (void)setUploadTimeInterval:;
- (void)startAutoUploadNearbyInfo;
- (void)stopAutoUploadNearbyInfo;
- (BOOL)uploadNearbyInfo:;
- (double)uploadTimeInterval;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)additionalParameters;
+ (id)sharedInstance;
@end
