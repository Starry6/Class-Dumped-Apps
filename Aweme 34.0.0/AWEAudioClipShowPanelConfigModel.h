@interface AWEAudioClipShowPanelConfigModel : NSObject
@property (nonatomic) double shootDuration;
@property (nonatomic) double startLocation;
@property (nonatomic) double currentClipDuration;
@property (nonatomic) double availableCutDuration;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (nonatomic) BOOL useSuggestInitial;
@property (nonatomic) ACCMusicTrimViewSnapShootModel imageMusicTrimStatusModel;
- (void)setShootDuration:;
- (BOOL)enableMusicLoop;
- (void)setEnableMusicLoop:;
- (double)shootDuration;
- (BOOL)enableUseOriginMusic;
- (void)setEnableUseOriginMusic:;
- (id)imageMusicTrimStatusModel;
- (void)setImageMusicTrimStatusModel:;
- (void)setCurrentClipDuration:;
- (void)setUseSuggestInitial:;
- (void)setAvailableCutDuration:;
- (double)availableCutDuration;
- (BOOL)useSuggestInitial;
- (double)currentClipDuration;
- (void).cxx_destruct;
- (double)startLocation;
- (void)setStartLocation:;
@end
