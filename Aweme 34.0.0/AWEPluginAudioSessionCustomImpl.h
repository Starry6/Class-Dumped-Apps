@interface AWEPluginAudioSessionCustomImpl : NSObject
@property (nonatomic) BOOL hostAudioStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleAWEPlayVideoPlay:;
- (void)handleAWEPlayVideoPause:;
- (void)setHostAudioStatus:;
- (BOOL)hostAudioStatus;
- (void)setActive:withOptions:completion:;
- (void)dealloc;
- (void)setupObserver;
- (void)setActive:completion:;
+ (id)sharedPlugin;
@end
