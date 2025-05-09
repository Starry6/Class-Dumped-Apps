@interface AWEFeedUnConsumeFeatureModel : AWEFeedBaseSequenceFeatureModel
@property (nonatomic) NSString item_id;
@property (nonatomic) NSNumber video_time;
@property (nonatomic) q type;
@property (nonatomic) NSString music_id;
@property (nonatomic) NSString author_id;
@property (nonatomic) NSString biz;
@property (nonatomic) NSNumber predict_stay_time;
@property (nonatomic) NSNumber predict_skip;
@property (nonatomic) NSNumber predict_playcomplete;
@property (nonatomic) NSNumber predict_finish;
@property (nonatomic) NSNumber predict_pure_like;
@property (nonatomic) NSNumber predict_dislike;
@property (nonatomic) NSNumber predict_head;
@property (nonatomic) NSNumber predict_head_play_cnt;
@property (nonatomic) NSNumber predict_head_playtime;
@property (nonatomic) q is_commerce_unconsumed;
- (id)biz;
- (void)updateFeature:forKey:extra:;
- (void)setBiz:;
- (id)item_id;
- (void)setItem_id:;
- (id)author_id;
- (id)music_id;
- (void)setMusic_id:;
- (void)setAuthor_id:;
- (void)setVideo_time:;
- (void)setPredict_stay_time:;
- (void)setPredict_skip:;
- (void)setPredict_playcomplete:;
- (void)setPredict_finish:;
- (void)setPredict_pure_like:;
- (void)setPredict_dislike:;
- (void)setPredict_head:;
- (void)setPredict_head_play_cnt:;
- (void)setPredict_head_playtime:;
- (void)setIs_commerce_unconsumed:;
- (id)video_time;
- (id)predict_stay_time;
- (id)predict_skip;
- (id)predict_playcomplete;
- (id)predict_finish;
- (id)predict_pure_like;
- (id)predict_dislike;
- (id)predict_head;
- (id)predict_head_play_cnt;
- (id)predict_head_playtime;
- (long long)is_commerce_unconsumed;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)predictFeatureKeyMap;
@end
