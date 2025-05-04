@interface AWEDanmakuPlayMonitorHandler : NSObject
@property (nonatomic) HMDThreadSafeArray awemeModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getBatteryMonitorInfo;
- (id)awemeModels;
- (void)setAwemeModels:;
- (void)setEvent;
- (id)danmakuPlayResultParamsWithNeedReset:;
- (void)addVideoPlayIfNeedWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
