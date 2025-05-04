@interface AWEDTOEditorTemplateBindingMusicModel : MTLModel
@property (nonatomic) BOOL excludeMusic;
@property (nonatomic) BOOL hasEffectMusic;
@property (nonatomic) BOOL notRecommendMusic;
@property (nonatomic) NSString musicId;
@property (nonatomic) double effectMusicVolume;
@property (nonatomic) AWEDTOClipRangeEntry clipRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicId;
- (BOOL)excludeMusic;
- (void)setExcludeMusic:;
- (BOOL)hasEffectMusic;
- (void)setHasEffectMusic:;
- (BOOL)notRecommendMusic;
- (void)setNotRecommendMusic:;
- (double)effectMusicVolume;
- (void)setEffectMusicVolume:;
- (id)clipRange;
- (void)setClipRange:;
- (void).cxx_destruct;
+ (id)clipRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
