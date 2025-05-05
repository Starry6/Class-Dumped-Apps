@interface IESLiveAnimationDelegate : NSObject
@property (nonatomic) <CAAnimationDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStart:;
- (void)animationDidStop:finished:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
+ (id)animationDelegate:;
@end
