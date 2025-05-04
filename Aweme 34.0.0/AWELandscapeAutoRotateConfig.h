@interface AWELandscapeAutoRotateConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)delayBeginMonitor;
+ (BOOL)updateEntryViewWhenAppear;
+ (BOOL)canSupportLandscapeBoth;
+ (BOOL)isAutoRotateSwitchOpen;
+ (id)autoRotateSwitchStatusSource;
+ (BOOL)shouldShowAutoRotateSwitch;
+ (BOOL)autoRotateSwitch;
+ (long long)autoRotateStyle;
+ (void)openAutoRotateSwitch:byStrategy:;
+ (long long)autoRotateSwitchStrategy;
+ (double)lastEnterLandscapeTime;
+ (void)addGuideToastShowTimes;
+ (BOOL)canShowGuideToast;
+ (void)recordEnterLandscape;
+ (BOOL)canAutoRoteScreenOrientation;
+ (void)openAutoRotateSwitch:;
+ (void)turnOnAutoRotateSwitchByStrategyIfNeeded;
@end
