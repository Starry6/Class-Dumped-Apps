@interface AWEMusicStreamingImpl.LunaTrackPreview : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q duration;
@property (nonatomic) q start;
@property (nonatomic) BOOL isUnlimitedPreview;
- (BOOL)isUnlimitedPreview;
- (void)setIsUnlimitedPreview:;
- (void)setStart:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setDuration:;
- (long long)duration;
- (id)initWithCoder:;
- (long long)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
