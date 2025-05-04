@interface AWEDemaciaPlayTokenAuthModel : AWEBaseApiModel
@property (nonatomic) NSString vid;
@property (nonatomic) NSString token;
@property (nonatomic) NSString auth;
@property (nonatomic) NSString tvToken;
@property (nonatomic) NSArray hosts;
- (id)tvToken;
- (void)setTvToken:;
- (void).cxx_destruct;
- (id)hosts;
- (void)setToken:;
- (id)token;
- (void)setHosts:;
- (void)setVid:;
- (id)vid;
- (id)auth;
- (void)setAuth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
