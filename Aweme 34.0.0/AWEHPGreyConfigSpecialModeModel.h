@interface AWEHPGreyConfigSpecialModeModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hotReloadEnable;
@property (nonatomic) double saturation;
@property (nonatomic) double endTime;
@property (nonatomic) q allFeedConsumeCount;
@property (nonatomic) NSString modelEffect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modelEffect;
- (long long)greyModeType;
- (BOOL)hotReloadEnable;
- (void)setHotReloadEnable:;
- (void)setModelEffect:;
- (long long)allFeedConsumeCount;
- (void)setAllFeedConsumeCount:;
- (BOOL)enable;
- (BOOL)isValidWithError:;
- (double)endTime;
- (void)setEndTime:;
- (id)description;
- (void).cxx_destruct;
- (void)setSaturation:;
- (void)setEnable:;
- (double)saturation;
+ (id)JSONKeyPathsByPropertyKey;
@end
