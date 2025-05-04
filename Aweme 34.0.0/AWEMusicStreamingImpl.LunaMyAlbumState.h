@interface AWEMusicStreamingImpl.LunaMyAlbumState : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) BOOL isCollected;
@property (nonatomic) q countPurch;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (long long)countPurch;
- (void)setCountPurch:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
