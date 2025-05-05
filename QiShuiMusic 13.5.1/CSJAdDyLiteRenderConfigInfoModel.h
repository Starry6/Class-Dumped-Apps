@interface CSJAdDyLiteRenderConfigInfoModel : CSJBasicModel
@property (nonatomic) q pre_request_ad_num;
@property (nonatomic) q reward_task_goal;
@property (nonatomic) q reward_task_type;
@property (nonatomic) NSString reward_text;
@property (nonatomic) q reward_time;
@property (nonatomic) q reward_slide_type;
@property (nonatomic) q use_gnd_prefetch;
- (void)setReward_text:;
- (void)setReward_time:;
- (long long)pre_request_ad_num;
- (long long)reward_slide_type;
- (long long)reward_task_goal;
- (long long)reward_task_type;
- (id)reward_text;
- (long long)reward_time;
- (void)setPre_request_ad_num:;
- (void)setReward_slide_type:;
- (void)setReward_task_goal:;
- (void)setReward_task_type:;
- (void)setUse_gnd_prefetch:;
- (long long)use_gnd_prefetch;
- (void).cxx_destruct;
@end
