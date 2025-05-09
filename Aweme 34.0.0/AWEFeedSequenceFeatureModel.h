@interface AWEFeedSequenceFeatureModel : AWEFeedBaseSequenceFeatureModel
@property (nonatomic) NSNumber s_ts;
@property (nonatomic) NSNumber p_t_a;
@property (nonatomic) NSNumber v_t;
@property (nonatomic) Q user_act;
@property (nonatomic) NSString mid;
@property (nonatomic) NSString aid;
@property (nonatomic) q type;
@property (nonatomic) NSString biz;
@property (nonatomic) NSString score_info;
@property (nonatomic) Q tuji_act;
@property (nonatomic) NSNumber tuji_st;
- (id)biz;
- (void)updateFeature:forKey:extra:;
- (void)setMid:;
- (void)setBiz:;
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
- (void)setTuji_act:;
- (void)setTuji_st:;
- (unsigned long long)tuji_act;
- (id)tuji_st;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)aid;
- (id)mid;
- (void)setAid:;
@end
