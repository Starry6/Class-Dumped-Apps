@interface AWEAudioClipCancelResultModel : NSObject
@property (nonatomic) {_HTSAudioRange=dd} range;
@property (nonatomic) q changeType;
@property (nonatomic) BOOL initialMusicLoopStatus;
@property (nonatomic) q initialRepeatCount;
@property (nonatomic) BOOL initialUseOriginMusicStatus;
@property (nonatomic) BOOL initialUseSuggestStatus;
@property (nonatomic) ACCMusicTrimViewSnapShootModel initialImageMusicTrimStatusModel;
- (BOOL)initialMusicLoopStatus;
- (BOOL)initialUseOriginMusicStatus;
- (id)initialImageMusicTrimStatusModel;
- (long long)initialRepeatCount;
- (void)setInitialUseSuggestStatus:;
- (void)setInitialMusicLoopStatus:;
- (void)setInitialUseOriginMusicStatus:;
- (void)setInitialImageMusicTrimStatusModel:;
- (void)setInitialRepeatCount:;
- (BOOL)initialUseSuggestStatus;
- (id)range;
- (void)setRange:;
- (void)setChangeType:;
- (long long)changeType;
- (void).cxx_destruct;
@end
