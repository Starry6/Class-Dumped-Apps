@interface AWELiveWifiToCellularInverseServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (long long)switchNetEvent;
- (void)triggerSwitching;
- (BOOL)shouldExtraShowSwitchNetPushView;
- (void)didShowSwitchNetPushView;
- (id)unblockPushBusinessType;
- (BOOL)supportShowSwitchNetPushViewScene;
- (void)lazyInit;
- (BOOL)switchNetFunctionEnable;
- (id)init;
+ (id)sharedInstance;
@end
