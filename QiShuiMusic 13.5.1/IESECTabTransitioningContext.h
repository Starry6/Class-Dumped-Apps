@interface IESECTabTransitioningContext : NSObject
@property (nonatomic) IESECSlidingViewElementWrapper fromTabViewElement;
@property (nonatomic) IESECSlidingViewElementWrapper toTabViewElement;
@property (nonatomic) q nextIndex;
@property (nonatomic) BOOL needsCancelTransition;
- (id)fromTabViewElement;
- (BOOL)needsCancelTransition;
- (void)setFromTabViewElement:;
- (void)setNeedsCancelTransition:;
- (void)setToTabViewElement:;
- (id)toTabViewElement;
- (long long)nextIndex;
- (void).cxx_destruct;
- (void)setNextIndex:;
@end
