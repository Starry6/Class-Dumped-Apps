@interface IESLiveSaaSRoomThemeManager : NSObject
@property (nonatomic) q maxTimes;
@property (nonatomic) <IESLiveSaaSRoomThemeActions> themeDispatcher;
- (id)themeDispatcher;
- (void)cacheDataWhenRoomEnterWithRoom:complete:;
- (BOOL)checkLocalDataExistStatusWithRoom:;
- (void)fetchLocalThemeDataWithRoom:tintTags:;
- (void)fetchThemeDataWithRoom:fetchMomentType:;
- (id)imageWithType:isVertical:;
- (id)imageWithType:skinInfo:isVertical:;
- (long long)maxTimes;
- (void)refreshViewTheme;
- (void)setMaxTimes:;
- (void)setThemeDispatcher:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
