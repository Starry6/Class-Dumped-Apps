@interface AWEHPTabBarBGSkinConfigSpecialModeModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL padEnable;
@property (nonatomic) BOOL hotReloadEnable;
@property (nonatomic) double endTime;
@property (nonatomic) NSString modelEffect;
@property (nonatomic) AWEHPTabBarBGSkinResource resources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)padEnable;
- (id)modelEffect;
- (BOOL)hotReloadEnable;
- (void)setPadEnable:;
- (void)setHotReloadEnable:;
- (void)setModelEffect:;
- (BOOL)enable;
- (id)resources;
- (BOOL)isValidWithError:;
- (double)endTime;
- (void)setEndTime:;
- (void)setResources:;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
