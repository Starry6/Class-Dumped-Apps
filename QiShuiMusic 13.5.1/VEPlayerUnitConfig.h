@interface VEPlayerUnitConfig : NSObject
@property (nonatomic) BOOL useNewModule;
@property (nonatomic) BOOL autoRepeatPlay;
@property (nonatomic) BOOL autoPlayWhenAppBecomeActive;
@property (nonatomic) BOOL shouldCheckPlayBack;
@property (nonatomic) HTSVideoData videoData;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL needSeekWhenPlayerAndItemNotReady;
@property (nonatomic) I audioProcessFrameCount;
@property (nonatomic) BOOL enableMultiHighFPSPreview;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL enableNoAvplayer;
- (void)setAutoPlayWhenAppBecomeActive:;
- (unsigned int)audioProcessFrameCount;
- (BOOL)autoPlayWhenAppBecomeActive;
- (BOOL)autoRepeatPlay;
- (BOOL)enableMultiHighFPSPreview;
- (BOOL)enableMultiTrack;
- (BOOL)enableNoAvplayer;
- (BOOL)isPreviewMode;
- (BOOL)needSeekWhenPlayerAndItemNotReady;
- (void)setAudioProcessFrameCount:;
- (void)setAutoRepeatPlay:;
- (void)setEnableMultiHighFPSPreview:;
- (void)setEnableMultiTrack:;
- (void)setEnableNoAvplayer:;
- (void)setIsPreviewMode:;
- (void)setNeedSeekWhenPlayerAndItemNotReady:;
- (void)setShouldCheckPlayBack:;
- (void)setUseNewModule:;
- (void)setVideoData:;
- (BOOL)shouldCheckPlayBack;
- (BOOL)useNewModule;
- (id)videoData;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
