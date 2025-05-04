@interface AWEEffectModelMixinInfo : NSObject
@property (nonatomic) IESEffectModel hostEffectModel;
@property (nonatomic) AWEEffectModelMixinMusicInfo musicInfo;
@property (nonatomic) AWEEffectModelMixinAIGCInfo AIGCInfo;
@property (nonatomic) AWEEffectModelMixinAlbumConfigInfo albumConfigInfo;
@property (nonatomic) AWEEffectModelMixinAEEffectInfo AEEffectConfigInfo;
@property (nonatomic) AWEEffectModelMixinPropTypeInfo propTypeInfo;
@property (nonatomic) AWEEffectModelMixinExtraInfo extraInfo;
- (id)musicInfo;
- (void)setMusicInfo:;
- (id)AEEffectConfigInfo;
- (id)AIGCInfo;
- (id)albumConfigInfo;
- (id)propTypeInfo;
- (id)hostEffectModel;
- (void)setHostEffectModel:;
- (void)setAIGCInfo:;
- (void)setAlbumConfigInfo:;
- (void)setAEEffectConfigInfo:;
- (void)setPropTypeInfo:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
