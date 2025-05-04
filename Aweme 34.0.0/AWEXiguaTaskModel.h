@interface AWEXiguaTaskModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString activityIconUrl;
@property (nonatomic) q switchType;
@property (nonatomic) BOOL isXiguaTask;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (BOOL)isXiguaTask;
- (id)activityIconUrl;
- (void)setActivityIconUrl:;
- (void)setIsXiguaTask:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setSwitchType:;
- (long long)switchType;
+ (id)JSONKeyPathsByPropertyKey;
@end
