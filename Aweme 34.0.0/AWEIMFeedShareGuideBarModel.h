@interface AWEIMFeedShareGuideBarModel : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) q strategy;
@property (nonatomic) BOOL showAvatar;
@property (nonatomic) NSArray activeLevelFilter;
@property (nonatomic) q freqHour;
@property (nonatomic) BOOL changeColorToRed;
@property (nonatomic) q showCount;
@property (nonatomic) double exitHours;
- (BOOL)showAvatar;
- (void)setShowAvatar:;
- (id)activeLevelFilter;
- (void)setActiveLevelFilter:;
- (long long)freqHour;
- (void)setFreqHour:;
- (BOOL)changeColorToRed;
- (void)setChangeColorToRed:;
- (double)exitHours;
- (void)setExitHours:;
- (long long)strategy;
- (BOOL)enable;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setStrategy:;
- (void)setShowCount:;
- (long long)showCount;
@end
