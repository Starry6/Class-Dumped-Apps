@interface AWEGDLiveFloatManager : NSObject
@property (nonatomic) <AWEPOILiveFloatOnTop> liveFloatOnTop;
@property (nonatomic) AWEGDLiveFloatConfig config;
@property (nonatomic) BOOL isLiveFloatUserClosed;
- (void)setupConfig:;
- (BOOL)fromLive;
- (void)showLiveFloat;
- (void)hideLiveFloat;
- (void)dismissLiveFloat;
- (void)setIsLiveFloatUserClosed:;
- (void)muteLiveFloat:;
- (void)muteLiveWindow:;
- (void)setupLiveFloat;
- (void)setLiveFloatOnTop:;
- (id)liveFloatOnTop;
- (BOOL)isLiveFloatUserClosed;
- (void)updateLiveFloatStates;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
