@interface AWENearbyTransformerGestureGuideManager : NSObject
@property (nonatomic) NSNumber canShowGuide;
- (id)canShowGuide;
- (void)setCanShowGuide:;
- (BOOL)enablePanGesture;
- (void)recordHasShowGuide;
- (long long)__times;
- (id)__transformerGestureGuideSettings;
- (long long)__numberOfDays;
- (long long)__dailyCount;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
