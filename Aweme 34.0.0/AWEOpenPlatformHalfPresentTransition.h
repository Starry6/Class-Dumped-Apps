@interface AWEOpenPlatformHalfPresentTransition : NSObject
@property (nonatomic) BOOL dismiss;
@property (nonatomic) BOOL isLandScape;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLandScape;
- (void)setIsLandScape:;
- (BOOL)dismiss;
- (double)transitionDuration:;
- (void)animateTransition:;
- (void)setDismiss:;
@end
