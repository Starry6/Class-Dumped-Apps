@interface UgenAnimationDelegateObject : NSObject
@property (nonatomic) UgenFullLinkObject fullLinkObject;
@property (nonatomic) UIView animationView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullLinkObject;
- (void)setFullLinkObject:;
- (id)initWithView:;
- (void)animationDidStart:;
- (id)init;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
@end
