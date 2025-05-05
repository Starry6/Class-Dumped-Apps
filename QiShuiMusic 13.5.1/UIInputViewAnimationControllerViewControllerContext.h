@interface UIInputViewAnimationControllerViewControllerContext : NSObject
@property (nonatomic) <UIViewControllerContextTransitioning> mainContext;
@property (nonatomic) UIView fromKeyboard;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} fromKeyboardFrame;
@property (nonatomic) UIView toKeyboard;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} toKeyboardFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)mainContext;
- (void).cxx_destruct;
- (id)fromKeyboard;
- (id)fromKeyboardFrame;
- (id)toKeyboard;
- (id)toKeyboardFrame;
- (id)initWithHost:startPlacement:endPlacement:transitionContext:;
+ (id)contextWithHost:startPlacement:endPlacement:transitionContext:;
@end
