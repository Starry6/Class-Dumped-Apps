@interface AWEPlayProgressModel : AWEBaseApiModel
@property (nonatomic) double playProgress;
@property (nonatomic) double lastModifiedTime;
@property (nonatomic) NSString progressGuildBar;
@property (nonatomic) q watchTimes;
- (double)playProgress;
- (void)setLastModifiedTime:;
- (void)setPlayProgress:;
- (id)progressGuildBar;
- (void)setProgressGuildBar:;
- (long long)watchTimes;
- (void)setWatchTimes:;
- (void).cxx_destruct;
- (double)lastModifiedTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
