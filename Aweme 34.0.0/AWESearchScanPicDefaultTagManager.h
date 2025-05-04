@interface AWESearchScanPicDefaultTagManager : NSObject
@property (nonatomic) q timeoutPeriod;
@property (nonatomic) BOOL enable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDefaultTagResultWithImage:;
- (void)setTimeoutPeriod:;
- (long long)timeoutPeriod;
- (void)updateBusiness;
- (id)impGetDefaultTagResultWithImage:scene:channel:;
- (id)getDefaultTagResultWithImage:scene:channel:;
- (id)buildTaskDataFormImage:;
- (void)trackPitayaEventWithSuccess:error:costTime:scene:channel:;
- (BOOL)enable;
- (id)init;
- (void)setEnable:;
+ (id)setupManager;
+ (id)sharedInstance;
@end
