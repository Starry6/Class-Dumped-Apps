@interface AWEFeedInteractiveAngleUtil : NSObject
@property (nonatomic) NSMutableDictionary gestureAngleConfigDict;
@property (nonatomic) NSNumber adRefinementStatus;
- (BOOL)awe_shouldAdjustDirectionWithPanGestureRecognizer:referString:awemeModel:;
- (unsigned long long)awe_directionWithGestureRecognizer:referString:awemeModel:;
- (void)setupGestureAngleConfigDict;
- (id)gestureAngleConfigSetting;
- (void)setGestureAngleConfigDict:;
- (void)setAdRefinementStatus:;
- (void)setupGestureAngleEnhanceConfigDict;
- (id)gestureAngleConfigDict;
- (id)parseVideoTypeFromModel:;
- (id)adRefinementStatus;
- (id)angleConfigModelWithReferString:awemeModel:;
- (id)awe_adjustDirectionWithReferString:awemeModel:;
- (id)init;
- (void).cxx_destruct;
+ (unsigned long long)directionForPan:;
+ (id)interactiveGestureTanValue;
+ (id)sharedInstance;
@end
