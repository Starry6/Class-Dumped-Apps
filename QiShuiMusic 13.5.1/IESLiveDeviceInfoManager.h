@interface IESLiveDeviceInfoManager : NSObject
@property (nonatomic) NSInteger brightness;
@property (nonatomic) float systemVolume;
@property (nonatomic) q audioType;
@property (nonatomic) float lastSystemVolume;
@property (nonatomic) float volumeChangeValue;
- (int)audioPlayType;
- (long long)getAudioPlayType;
- (float)getCurrentSystemVolume;
- (int)getScreenBrightness;
- (void)handleAudioSessionRouteChangeNotification:;
- (void)handleBrightnessChangeNotification;
- (BOOL)isHeadSetPlugging;
- (float)lastSystemVolume;
- (void)p_addObserver;
- (void)p_removeObserver;
- (void)setLastSystemVolume:;
- (void)setSystemVolume:;
- (void)setVolumeChangeValue:;
- (float)systemVolume;
- (float)volumeChangeValue;
- (id)init;
- (void)dealloc;
- (int)brightness;
- (void)setBrightness:;
- (void)volumeChanged:;
- (long long)audioType;
- (void)setAudioType:;
+ (id)shareInstance;
@end
