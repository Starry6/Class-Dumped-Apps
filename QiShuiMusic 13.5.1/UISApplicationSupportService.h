@interface UISApplicationSupportService : NSObject
@property (nonatomic) BOOL hasFinishedLaunching;
@property (nonatomic) UISApplicationInitializationContext defaultContext;
@property (nonatomic) <UISApplicationSupportServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_delegate;
- (BOOL)hasFinishedLaunching;
- (void)_setDelegate:;
- (void)initializeClientWithParameters:completion:;
- (id)init;
- (void)dealloc;
- (id)initWithCalloutQueue:;
- (void)start;
- (void)listener:didReceiveConnection:withContext:;
- (void)_pendRequestUntilLaunch:;
- (void)setDelegate:;
- (id)_initWithDelegate:targetQueue:;
- (id)requestPasscodeUnlockUIWithCompletion:;
- (id)delegate;
- (void)destroyScenesPersistentIdentifiers:animationType:destroySessions:completion:;
- (id)defaultContext;
- (void).cxx_destruct;
- (void)setDefaultContext:;
+ (id)sharedInstance;
@end
