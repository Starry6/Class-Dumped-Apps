@interface UISDisplayContext : NSObject
@property (nonatomic) FBSDisplayConfiguration displayConfiguration;
@property (nonatomic) Q artworkSubtype;
@property (nonatomic) {UIEdgeInsets=dddd} peripheryInsets;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsPortrait;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) <_UIDisplayInfoShape> exclusionArea;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsLandscapeLeft;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsLandscapeRight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) FBSDisplayConfiguration displayConfiguration;
@property (nonatomic) UISApplicationSupportDisplayEdgeInfo displayEdgeInfo;
@property (nonatomic) Q artworkSubtype;
@property (nonatomic) Q userInterfaceStyle;
@property (nonatomic) UISDisplayShape exclusionArea;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)peripheryInsets;
- (id)safeAreaInsetsLandscapeLeft;
- (double)systemMinimumMargin;
- (double)homeAffordanceOverlayAllowance;
- (id)safeAreaInsetsPortrait;
- (id)safeAreaInsetsLandscapeRight;
- (id)safeAreaInsetsPortraitUpsideDown;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)displayConfiguration;
- (unsigned long long)userInterfaceStyle;
- (id)initWithXPCDictionary:;
- (id)initWithDisplayConfiguration:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)displayEdgeInfo;
- (id)initWithDisplayConfiguration:displayEdgeInfo:exclusionArea:;
- (unsigned long long)artworkSubtype;
- (id)exclusionArea;
- (id)initWithDisplayConfiguration:displayEdgeInfo:;
- (id)_initWithDisplayContext:;
+ (id)_loadedInitialContext;
+ (id)defaultContext;
@end
