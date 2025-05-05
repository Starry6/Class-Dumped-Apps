@interface IESECShopTransitionViewProvider : NSObject
@property (nonatomic) double alpha;
@property (nonatomic) UIView superView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} convertedFrame;
@property (nonatomic) UIView view;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
- (id)convertedFrame;
- (void)setConvertedFrame:;
- (void)setSuperView:;
- (id)superView;
- (void)setAlpha:;
- (id)view;
- (double)alpha;
- (void).cxx_destruct;
- (void)setView:;
- (id)initialFrame;
- (void)setInitialFrame:;
+ (id)providerWithView:;
@end
