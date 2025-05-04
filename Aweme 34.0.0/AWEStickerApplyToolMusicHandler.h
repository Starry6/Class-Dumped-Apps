@interface AWEStickerApplyToolMusicHandler : AWEStickerApplyBaseHandler
@property (nonatomic) BOOL hasBecomeActive;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <ACCRecordSelectMusicService> musicService;
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicService;
- (void)setMusicService:;
- (void)flowServiceDidAddFragment:;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)handlerDidBecomeActive;
- (void)camera:willApplySticker:propSource:;
- (BOOL)hasBecomeActive;
- (void)setHasBecomeActive:;
- (void)p_observerMusicPanelStatusChangeIfNeeded;
- (void)p_asyncSendMusicInfoMessageToEffectWithStatus:;
- (void)dealloc;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
@end
