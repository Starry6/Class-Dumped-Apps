@interface AWEStickerRedpacketShootHandler : AWEStickerApplyBaseHandler
@property (nonatomic) <ACCRecordSelectMusicService> musicService;
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) BOOL enableEffectMusicTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicService;
- (void)setMusicService:;
- (BOOL)propServiceShouldApplyProp:propSource:propIndexPath:;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)camera:willApplySticker:propSource:;
- (BOOL)enableEffectMusicTime;
- (void)configEnableEffectMusicTime:;
- (void)showGuideVideoIfNeedWithEffect:completion:;
- (void)p_trackGuideSkipWithEffectId:;
- (void)p_trackGuideShowWithEffectId:;
- (void)setEnableEffectMusicTime:;
- (void).cxx_destruct;
@end
