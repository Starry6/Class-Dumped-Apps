@interface AWEShareIMWithTimestampModel : AWEBaseApiModel
@property (nonatomic) q currentPlaybackTimeWhenShare;
@property (nonatomic) BOOL isBoxSelected;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (BOOL)isBoxSelected;
- (long long)currentPlaybackTimeWhenShare;
- (void)setIsBoxSelected:;
- (void)setCurrentPlaybackTimeWhenShare:;
- (void).cxx_destruct;
@end
