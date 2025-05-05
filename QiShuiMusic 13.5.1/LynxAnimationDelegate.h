@interface LynxAnimationDelegate : NSObject
@property (nonatomic) @? didStart;
@property (nonatomic) @? didStop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didStop:withFlag:;
- (void)animationDidStart:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (void)forceStop;
- (id)copyWithZone:;
- (id)didStart;
- (void)setDidStart:;
- (id)didStop;
- (void)setDidStop:;
+ (id)initWithDidStart:didStop:;
+ (void)sendAnimationEvent:eventName:eventParams:;
@end
