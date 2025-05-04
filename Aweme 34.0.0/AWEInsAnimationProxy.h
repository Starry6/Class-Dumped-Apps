@interface AWEInsAnimationProxy : NSObject
@property (nonatomic) I flags;
@property (nonatomic) NSString itemID;
@property (nonatomic) AWEPlayInteractionReusableChecker checker;
@property (nonatomic) <AWEInsAnimationDelegate> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setChecker:;
- (id)getCurrentChecker;
- (id)itemID;
- (id)target;
- (void)setItemID:;
- (void)animationDidStop:finished:;
- (void)animationDidStart:;
- (void)setFlags:;
- (id)initWithTarget:;
- (void)setTarget:;
- (unsigned int)flags;
- (void).cxx_destruct;
- (id)checker;
+ (id)proxyWithTarget:;
@end
