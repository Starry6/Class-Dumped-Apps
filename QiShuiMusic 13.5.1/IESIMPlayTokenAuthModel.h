@interface IESIMPlayTokenAuthModel : IESIMBaseApiModel
@property (nonatomic) NSString vid;
@property (nonatomic) NSString token;
@property (nonatomic) NSString auth;
@property (nonatomic) NSString tvToken;
@property (nonatomic) NSArray hosts;
- (void)setVid:;
- (id)vid;
- (id)tvToken;
- (void)setTvToken:;
- (id)token;
- (id)hosts;
- (void)setToken:;
- (void).cxx_destruct;
- (void)setHosts:;
- (id)auth;
- (void)setAuth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
