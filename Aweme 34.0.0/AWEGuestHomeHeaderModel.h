@interface AWEGuestHomeHeaderModel : NSObject
@property (nonatomic) AWEURLModel darkCoverURL;
@property (nonatomic) AWEURLModel lightCoverURL;
@property (nonatomic) UIColor darkCoverColor;
@property (nonatomic) UIColor lightCoverColor;
@property (nonatomic) q followingCount;
@property (nonatomic) NSDictionary logPassback;
- (id)logPassback;
- (void)setLogPassback:;
- (void)setLightCoverColor:;
- (void)setDarkCoverColor:;
- (long long)followingCount;
- (id)lightCoverColor;
- (void)setFollowingCount:;
- (id)darkCoverColor;
- (id)lightCoverURL;
- (id)darkCoverURL;
- (void)setDarkCoverURL:;
- (void)setLightCoverURL:;
- (void).cxx_destruct;
@end
