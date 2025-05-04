@interface AWEBDSimPlayerBizVideoCheckConfig : BDSimPlayerBizVideoCheckConfig
@property (nonatomic) <AWEIronManModuleService> ironManService;
- (id)ironManService;
- (void)setIronManService:;
- (BOOL)isValidPlaying;
- (BOOL)isStoryMultiPublishEnabled;
- (BOOL)isInForbidPage;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
