@interface AWEMusicStreamingImpl.LunaMyMediaState : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) BOOL isCollected;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
