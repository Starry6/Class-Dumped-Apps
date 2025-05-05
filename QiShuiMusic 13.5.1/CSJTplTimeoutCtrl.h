@interface CSJTplTimeoutCtrl : NSObject
@property (nonatomic) CSJTplTimeoutCtrlItem banner;
@property (nonatomic) CSJTplTimeoutCtrlItem rewarded;
@property (nonatomic) CSJTplTimeoutCtrlItem feed;
@property (nonatomic) CSJTplTimeoutCtrlItem draw;
@property (nonatomic) CSJTplTimeoutCtrlItem fullscreen;
@property (nonatomic) CSJTplTimeoutCtrlItem unknown;
- (long long)timeoutWithSlotAdType:h5Render:;
- (id)rewarded;
- (void)setDraw:;
- (void)setRewarded:;
- (id)banner;
- (id)feed;
- (id)unknown;
- (void)setFullscreen:;
- (id)draw;
- (id)initWithDictionary:;
- (void)setUnknown:;
- (void)setBanner:;
- (void)setFeed:;
- (void).cxx_destruct;
- (void)reset;
- (id)fullscreen;
+ (id)defaultValue;
@end
