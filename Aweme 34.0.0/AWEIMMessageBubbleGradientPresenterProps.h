@interface AWEIMMessageBubbleGradientPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) BOOL isGradientBG;
@property (nonatomic) UIImage contents;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentRect;
@property (nonatomic) BOOL needResetImage;
@property (nonatomic) BOOL needSwitchImage;
@property (nonatomic) BOOL checkViewDiff;
- (BOOL)isGradientBG;
- (void)setCheckViewDiff:;
- (void)setNeedResetImage:;
- (void)setNeedSwitchImage:;
- (void)setIsGradientBG:;
- (BOOL)needResetImage;
- (BOOL)needSwitchImage;
- (BOOL)checkViewDiff;
- (id)contentRect;
- (id)init;
- (void)setContentRect:;
- (void)setContents:;
- (id)contents;
- (void).cxx_destruct;
@end
