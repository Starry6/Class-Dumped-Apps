@interface AWENearbyHalfScreenAnimation : NSObject
@property (nonatomic) Q containerViewState;
- (BOOL)isValidAnimation;
- (long long)animationValue;
- (unsigned long long)containerViewState;
- (void)setContainerViewState:;
- (id)animationType;
@end
