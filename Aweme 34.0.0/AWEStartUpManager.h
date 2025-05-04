@interface AWEStartUpManager : NSObject
@property (nonatomic) NSDate firstTimeStartUpDate;
@property (nonatomic) BOOL isStartUpFirstTime;
@property (nonatomic) BOOL isAppVersionUpdated;
@property (nonatomic) BOOL isSystemBackgroundLaunch;
- (BOOL)isStartUpFirstTime;
- (BOOL)isAppVersionUpdated;
- (BOOL)isSystemBackgroundLaunch;
- (id)firstTimeStartUpDate;
- (void)setIsStartUpFirstTime:;
- (void)setIsAppVersionUpdated:;
- (void)setFirstTimeStartUpDate:;
- (void)setIsSystemBackgroundLaunch:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)isAwemeVideoPlayGuideViewShowing;
+ (void)resetStartUpFirstTime;
+ (id)sharedInstance;
@end
