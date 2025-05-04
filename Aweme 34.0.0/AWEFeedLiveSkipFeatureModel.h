@interface AWEFeedLiveSkipFeatureModel : AWEFeedBaseSequenceFeatureModel
@property (nonatomic) NSString gid;
@property (nonatomic) NSString aid;
@property (nonatomic) NSNumber live_time_gap;
@property (nonatomic) NSNumber live_duration;
@property (nonatomic) NSNumber live_window_stay_duration;
@property (nonatomic) NSNumber live_show_time;
- (void)updateFeature:forKey:extra:;
- (void)setLive_show_time:;
- (id)live_show_time;
- (void)setLive_time_gap:;
- (void)setLive_duration:;
- (void)setLive_window_stay_duration:;
- (id)live_time_gap;
- (id)live_duration;
- (id)live_window_stay_duration;
- (id)gid;
- (void)setGid:;
- (void).cxx_destruct;
- (id)aid;
- (void)setAid:;
@end
