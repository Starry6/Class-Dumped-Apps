@interface CSJDynamicSettingModel : NSObject
@property (nonatomic) q fv_skip_show;
@property (nonatomic) q rv_skip_time;
@property (nonatomic) q iv_skip_time;
@property (nonatomic) q video_type;
@property (nonatomic) q show_dislike;
@property (nonatomic) q video_adaptation;
@property (nonatomic) q voice_control;
@property (nonatomic) BOOL skip_change_to_close;
- (long long)fv_skip_show;
- (long long)iv_skip_time;
- (long long)rv_skip_time;
- (void)setFv_skip_show:;
- (void)setIv_skip_time:;
- (void)setRv_skip_time:;
- (void)setShow_dislike:;
- (void)setSkip_change_to_close:;
- (void)setVideo_adaptation:;
- (void)setVideo_type:;
- (void)setVoice_control:;
- (long long)show_dislike;
- (BOOL)skip_change_to_close;
- (long long)video_adaptation;
- (long long)video_type;
- (long long)voice_control;
- (id)initWithDictionary:;
@end
