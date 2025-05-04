@interface AWEMusicStreamingImpl.LunaMyTrackState : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isHidden;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (void)setIsHidden:;
- (id)initWithDictionary:error:;
- (id)init;
- (BOOL)isHidden;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
