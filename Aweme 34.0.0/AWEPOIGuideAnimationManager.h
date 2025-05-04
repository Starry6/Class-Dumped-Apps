@interface AWEPOIGuideAnimationManager : NSObject
@property (nonatomic) NSMutableDictionary showingMap;
- (BOOL)isShowingAnimationViewWithIdentifier:;
- (id)showingKeyWithIdentifier:;
- (id)showingMap;
- (void)showSwipeGuideWithDirection:type:inView:customText:withIdentifier:;
- (void)setShowingMap:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
