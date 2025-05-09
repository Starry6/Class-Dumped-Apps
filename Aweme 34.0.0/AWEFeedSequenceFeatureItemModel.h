@interface AWEFeedSequenceFeatureItemModel : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber s_ts;
@property (nonatomic) NSNumber p_t_a;
@property (nonatomic) NSNumber v_t;
@property (nonatomic) Q user_act;
@property (nonatomic) NSString score_info;
@property (nonatomic) NSString music_id;
@property (nonatomic) NSString author_id;
@property (nonatomic) NSMutableDictionary custom;
@property (nonatomic) q type;
@property (nonatomic) BOOL is_dup;
- (id)awemeModel;
- (void)setAwemeModel:;
- (BOOL)is_dup;
- (void)setIs_dup:;
- (void)setS_ts:;
- (void)setP_t_a:;
- (void)setV_t:;
- (void)setUser_act:;
- (void)setScore_info:;
- (id)s_ts;
- (id)p_t_a;
- (id)v_t;
- (unsigned long long)user_act;
- (id)score_info;
- (id)author_id;
- (id)music_id;
- (void)setMusic_id:;
- (void)setAuthor_id:;
- (id)itemID;
- (id)custom;
- (void)setItemID:;
- (id)init;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setCustom:;
- (id)toDict;
@end
