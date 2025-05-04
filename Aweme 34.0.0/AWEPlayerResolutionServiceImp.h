@interface AWEPlayerResolutionServiceImp : NSObject
@property (nonatomic) <AWEPlayerResolutionManagerProtocol> resolutionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolutionManager;
- (void)setResolutionManager:;
- (id)init;
- (void).cxx_destruct;
+ (id)resolutionConfig;
+ (BOOL)enableChangePreloadResolutionWithEnterFrom:inLandscape:;
+ (BOOL)shouldShowResolutionWhenVertical:model:enterFrom:;
+ (long long)recordDays;
+ (id)supportPageListWhenVertical:;
+ (id)supportAwemeTypeList;
+ (id)titleForManualGearTypes:;
+ (id)getCommonTrackParamsWithVideoDelegate:enterFrom:;
+ (unsigned long long)trackNumberWithGearTypes:;
+ (void)manualSelectResolution:videoDelegate:enterFrom:;
+ (long long)blockMaxCount;
+ (double)blockMaxTime;
+ (id)adjustLongPressResolutionItemIfNeeded:;
+ (id)showBottomNotificationWithVideoDelegate:enterFrom:;
@end
