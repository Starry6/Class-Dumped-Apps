@interface AWEIMMessageTabPadSplitFrameCheckResult : NSObject
@property (nonatomic) UIView targetView;
@property (nonatomic) BOOL frameChanged;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} oldFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)frameChanged;
- (void)setFrameChanged:;
- (id)oldFrame;
- (void)setOldFrame:;
- (id)targetView;
- (void)setTargetView:;
- (void).cxx_destruct;
@end
