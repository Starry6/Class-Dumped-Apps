@interface AWEPlayInteractionBottomTempAnimationManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showTempElement:currentElement:withDuration:;
- (void)showTempElement:currentElement:withDuration:completion:;
- (void)showTempElement:currentElement:animateBlock:;
- (void)hideTempElement:currentElement:withDuration:;
- (void)hideTempElement:currentElement:withDuration:completion:;
- (void)hideTempElement:currentElement:animateBlock:;
- (void)showTempElement:currentElement:;
- (void)hideTempElement:currentElement:;
@end
