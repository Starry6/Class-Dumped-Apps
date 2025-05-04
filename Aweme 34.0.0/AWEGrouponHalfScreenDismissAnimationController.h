@interface AWEGrouponHalfScreenDismissAnimationController : NSObject
@property (nonatomic) UIView currentAnimationContent;
@property (nonatomic) <AWEGrouponHalfScreenDismissAnimationProvider> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)dismiss:withAttachAnimation:completion:;
- (id)currentAnimationContent;
- (void)setCurrentAnimationContent:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
