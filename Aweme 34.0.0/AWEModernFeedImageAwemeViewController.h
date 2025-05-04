@interface AWEModernFeedImageAwemeViewController : AWEModernFeedBaseCellController
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView imageTagView;
@property (nonatomic) UIImageView atlasTagView;
- (void)didBecomeActiveForReason:;
- (void)didResignActiveForReason:;
- (void)didEndShowing;
- (void)playerWillEnterPureMode;
- (void)playerDidExitPureMode;
- (void)updatePrivacyTagView;
- (id)imageTagView;
- (id)atlasTagView;
- (void)setImageTagView:;
- (void)setAtlasTagView:;
- (void)viewWillLayoutSubviews;
- (id)contentView;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateWithModel:;
+ (BOOL)shouldUseADTileControllerWith:;
+ (void)__awe__codeRunnerRun_35;
@end
