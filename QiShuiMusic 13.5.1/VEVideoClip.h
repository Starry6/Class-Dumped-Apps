@interface VEVideoClip : NSObject
@property (nonatomic) VEVideoConfig config;
@property (nonatomic) IESTrackInfo trackInfo;
@property (nonatomic) VEVideoReader reader;
@property (nonatomic) {?=qiIq} seekTime;
@property (nonatomic) NSInteger distance;
@property (nonatomic) BOOL isBiggerThan4K;
- (BOOL)isBiggerThan4K;
- (void)setIsBiggerThan4K:;
- (int)distance;
- (void)setDistance:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)setSeekTime:;
- (id)config;
- (id)reader;
- (id)seekTime;
- (id)trackInfo;
- (void)setTrackInfo:;
- (void)setReader:;
@end
