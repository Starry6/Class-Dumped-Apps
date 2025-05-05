@interface IESMMTrackerHelper : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hmdTrackService:status:extra:;
- (void)localConfigureMMTracker:;
- (void)trackExceptionWithType:callback:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (void)configureMMTracker:;
+ (id)allocWithZone:;
+ (id)shareInstance;
@end
