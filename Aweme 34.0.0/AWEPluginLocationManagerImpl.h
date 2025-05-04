@interface AWEPluginLocationManagerImpl : NSObject
@property (nonatomic) NSMutableArray requestAuthCallbacks;
@property (nonatomic) NSMutableArray getLocationTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestAuthCallbacks;
- (void)setRequestAuthCallbacks:;
- (void)handleApplicationEnterBackground;
- (void)stopRequestingLoationWithLoation:error:;
- (void)addGetLocationTaskWithUniqueID:completion:;
- (void)startRequestingLoation;
- (id)getLocationTasks;
- (void)updateLocationAccessStatus:;
- (BOOL)isAuthorizedOrIncludeNotDetermined:;
- (void)getLocationWithUniqueID:completion:;
- (void)setGetLocationTasks:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestAuthorizationWithCompletion:;
+ (id)sharedPlugin;
+ (id)errorWithErrorCode:errorMsg:;
@end
