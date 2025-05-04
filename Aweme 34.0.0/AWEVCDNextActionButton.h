@interface AWEVCDNextActionButton : UIButton
@property (nonatomic) NSString normalTitle;
@property (nonatomic) BOOL isWhiteBackGround;
- (void)setNormalTitle:;
- (id)normalTitle;
- (id)loadingAnimation;
- (void)setIsWhiteBackGround:;
- (BOOL)isWhiteBackGround;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;
@end
