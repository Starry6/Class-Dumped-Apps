@interface AWEAntiAddictDayNightThresholdMap : MTLModel
@property (nonatomic) AWEAntiAddictDayNightThresholdModel halfPopupTime;
@property (nonatomic) AWEAntiAddictDayNightThresholdModel toastDayThreshold;
@property (nonatomic) AWEAntiAddictDayNightThresholdModel systemMaskDayThreshold;
@property (nonatomic) AWEAntiAddictDayNightThresholdModel forceMaskDayThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)halfPopupTime;
- (id)systemMaskDayThreshold;
- (id)forceMaskDayThreshold;
- (id)toastDayThreshold;
- (void)setHalfPopupTime:;
- (void)setToastDayThreshold:;
- (void)setSystemMaskDayThreshold:;
- (void)setForceMaskDayThreshold:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)halfPopupTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
