@interface AWEMusicStreamingImpl.PlayedMedia : NSObject
@property (nonatomic) q playedMills;
@property (nonatomic) NSString mediaID;
@property (nonatomic) NSString type;
@property (nonatomic) q duration;
- (long long)playedMills;
- (void)setPlayedMills:;
- (id)initWithMedia:playedMills:duration:;
- (id)init;
- (void)setDuration:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)duration;
- (id)mediaID;
- (void)setMediaID:;
@end
