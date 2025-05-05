@interface ShareElementPair : NSObject
@property (nonatomic) UIView fromView;
@property (nonatomic) UIView toView;
@property (nonatomic) UIView originParent;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originFrame;
@property (nonatomic) {CGPoint=dd} originPoint;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originBounds;
@property (nonatomic) double duration;
@property (nonatomic) BOOL crossPage;
- (void)setOriginPoint:;
- (void)setOriginFrame:;
- (void)backToOrigin;
- (BOOL)crossPage;
- (id)initWithFrom:to:;
- (id)originBounds;
- (id)originFrame;
- (id)originParent;
- (id)originPoint;
- (void)setCrossPage:;
- (void)setOriginBounds:;
- (void)setOriginParent:;
- (id)toView;
- (id)fromView;
- (void)setDuration:;
- (void)setToView:;
- (void).cxx_destruct;
- (void)setFromView:;
- (double)duration;
@end
