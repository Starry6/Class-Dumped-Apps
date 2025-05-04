@interface AWEStickerApplyRecommendedMusicHandler : AWEStickerApplyBaseHandler
@property (nonatomic) NSString currentRequestEffectIdentifier;
@property (nonatomic) NSNumber bindMusicStartLoadTime;
@property (nonatomic) BOOL hitCache;
- (BOOL)hitCache;
- (void)setHitCache:;
- (void)componentDidAppear;
- (void)trackPropWeakBindMusicLoadFinished;
- (void)setBindMusicStartLoadTime:;
- (id)bindMusicStartLoadTime;
- (void)camera:willApplySticker:propSource:;
- (id)currentRequestEffectIdentifier;
- (void)setCurrentRequestEffectIdentifier:;
- (void).cxx_destruct;
@end
