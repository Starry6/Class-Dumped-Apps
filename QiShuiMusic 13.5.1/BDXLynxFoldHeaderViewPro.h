@interface BDXLynxFoldHeaderViewPro : LynxUI
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} headerViewFrame;
@property (nonatomic) BOOL fold;
@property (nonatomic) <BDXLynxFoldHeaderViewProDelegate> delegate;
- (id)headerViewFrame;
- (void)layoutDidFinished;
- (void)setHeaderViewFrame:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)createView;
- (BOOL)fold;
+ (void)lynxLazyLoad;
@end
