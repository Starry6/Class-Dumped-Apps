@interface AWENearbyActivityBgModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel dark;
@property (nonatomic) AWEURLModel light;
@property (nonatomic) NSString trackParam;
@property (nonatomic) NSString bgTextColor;
@property (nonatomic) NSString bgTextColorLight;
- (id)trackParam;
- (void)setTrackParam:;
- (id)bgTextColor;
- (id)bgTextColorLight;
- (void)setBgTextColor:;
- (void)setBgTextColorLight:;
- (void).cxx_destruct;
- (id)light;
- (id)dark;
- (void)setDark:;
- (void)setLight:;
+ (BOOL)automaticallyDefaultMapping;
@end
