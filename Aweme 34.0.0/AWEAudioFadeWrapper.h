@interface AWEAudioFadeWrapper : NSObject
@property (nonatomic) BOOL fadeEnable;
- (void)setFadeEnable:;
- (void)setAudioWrapperForEngine:;
- (void)clearAudioWrapper;
- (BOOL)fadeEnable;
- (id)init;
- (void)dealloc;
+ (void)setupConfigs;
@end
