@interface AWEPadTabBarAdapter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldCompactMode;
- (BOOL)shouldCompactModeWithReferString:;
- (BOOL)shouldShowElementOnCompactMode;
- (BOOL)shouldShowClearOnCompactMode;
- (BOOL)shouldOnCompactModeAndShowElementWithSize:navSize:;
- (BOOL)shouldOnCompactModeWithSize:navSize:;
- (BOOL)isBlackCompactModeReferWithString:;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (id)tabBarCompactModeBlackList;
@end
