@interface FBDisplayLayoutTransition : NSObject
@property (nonatomic) q displayType;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL transitioning;
@property (nonatomic) NSString transitionReason;
@property (nonatomic) q interfaceOrientation;
@property (nonatomic) q backlightLevel;
- (id)init;
- (void)dealloc;
- (long long)interfaceOrientation;
- (long long)backlightLevel;
- (id)initWithDisplayType:name:;
- (BOOL)isTransitioning;
- (void)setInterfaceOrientation:;
- (void)setBacklightLevel:;
- (long long)displayType;
- (void)beginTransition;
- (void)setTransitionReason:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)transitionReason;
- (void)endTransition;
+ (id)layoutForDisplayType:;
+ (void)flushLayoutForDisplayType:;
@end
