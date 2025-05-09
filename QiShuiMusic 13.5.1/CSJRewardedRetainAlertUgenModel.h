@interface CSJRewardedRetainAlertUgenModel : NSObject
@property (nonatomic) double alertScale;
@property (nonatomic) NSString alert_title;
@property (nonatomic) NSString alert_content;
@property (nonatomic) NSString alert_content_unit;
@property (nonatomic) NSString red_pack_amount;
@property (nonatomic) BOOL is_display_unit;
@property (nonatomic) q amount;
@property (nonatomic) NSString threshold_text;
@property (nonatomic) NSString expire_text;
@property (nonatomic) NSString template_url;
@property (nonatomic) NSString template_md5;
@property (nonatomic) NSString slotId;
@property (nonatomic) NSString reward_name;
@property (nonatomic) NSString reward_amount;
@property (nonatomic) NSString remain_time;
@property (nonatomic) NSString reward_again_extra;
- (id)red_pack_amount;
- (BOOL)is_display_unit;
- (void)setAlert_title:;
- (void)setExpire_text:;
- (void)setRemain_time:;
- (void)setReward_name:;
- (double)alertScale;
- (id)alert_content;
- (id)alert_content_unit;
- (id)alert_title;
- (id)expire_text;
- (id)remain_time;
- (id)reward_again_extra;
- (id)reward_amount;
- (id)reward_name;
- (void)setAlertScale:;
- (void)setAlert_content:;
- (void)setAlert_content_unit:;
- (void)setIs_display_unit:;
- (void)setRed_pack_amount:;
- (void)setReward_again_extra:;
- (void)setReward_amount:;
- (void)setTemplate_md5:;
- (void)setTemplate_url:;
- (void)setThreshold_text:;
- (id)template_md5;
- (id)template_url;
- (id)threshold_text;
- (id)slotId;
- (id)init;
- (void)setSlotId:;
- (void).cxx_destruct;
- (long long)amount;
- (void)setAmount:;
@end
