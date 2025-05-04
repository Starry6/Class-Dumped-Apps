@interface AWEPadChannelUtils : NSObject
@property (nonatomic) <AWEIronManService> ironManService;
- (id)ironManService;
- (void)setIronManService:;
- (id)statusBarOrientationForIronMan;
- (id)configIronManScene:forScheme:;
- (id)configIronManQueryParamWithEntry:forScheme:;
- (id)microappAppendOrientationParams:extraParams:;
- (id)padMovieChannelIronManScene;
- (long long)indexForHorizontalBreakPoint:;
- (void).cxx_destruct;
+ (BOOL)isApplicationLandScape;
+ (id)sharedInstance;
@end
