@interface AWEMusicStreamingImpl.LunaTrackChorus : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q duration;
@property (nonatomic) q start;
- (void)setStart:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setDuration:;
- (long long)duration;
- (id)initWithCoder:;
- (long long)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
