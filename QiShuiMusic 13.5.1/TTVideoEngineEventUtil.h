@interface TTVideoEngineEventUtil : NSObject
@property (nonatomic) float currentVolume;
@property (nonatomic) BOOL volumeSet;
@property (nonatomic) q screenWidth;
@property (nonatomic) q screenHeight;
@property (nonatomic) float screenScale;
@property (nonatomic) NSString lastPlaySessionId;
@property (nonatomic) NSString appSessionId;
- (id)appSessionId;
- (id)lastPlaySessionId;
- (void)setAppSessionId:;
- (void)setLastPlaySessionId:;
- (void)setVolumeSet:;
- (BOOL)volumeSet;
- (long long)screenWidth;
- (void)setScreenHeight:;
- (long long)screenHeight;
- (float)screenScale;
- (id)init;
- (void)dealloc;
- (void)setScreenScale:;
- (void)setCurrentVolume:;
- (void).cxx_destruct;
- (float)currentVolume;
- (void)setScreenWidth:;
- (void)volumeChanged:;
+ (id)sharedInstance;
@end
