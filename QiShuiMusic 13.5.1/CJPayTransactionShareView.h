@interface CJPayTransactionShareView : NSObject
@property (nonatomic) UIViewController fromVC;
@property (nonatomic) UIViewController toVC;
@property (nonatomic) UIView fromView;
@property (nonatomic) UIView toView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} fromFinalFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} toFinalFrame;
- (id)fromFinalFrame;
- (id)fromVC;
- (void)setFromFinalFrame:;
- (void)setFromVC:;
- (void)setToFinalFrame:;
- (void)setToVC:;
- (id)toFinalFrame;
- (id)toVC;
- (id)toView;
- (id)fromView;
- (void)setToView:;
- (void).cxx_destruct;
- (void)setFromView:;
- (id)initWith:;
@end
