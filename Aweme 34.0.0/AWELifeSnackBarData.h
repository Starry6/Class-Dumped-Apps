@interface AWELifeSnackBarData : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString grouponText;
@property (nonatomic) BOOL enable;
@property (nonatomic) q lifePageType;
@property (nonatomic) BOOL needNearbyDefault;
- (id)grouponText;
- (void)setGrouponText:;
- (long long)lifePageType;
- (void)setLifePageType:;
- (BOOL)needNearbyDefault;
- (void)setNeedNearbyDefault:;
- (BOOL)enable;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setEnable:;
+ (BOOL)automaticallyDefaultMapping;
@end
