@interface IESLivePrivilegeUserEnterDressPreviewView : IESLivePrivilegeDressPreviewBaseView
@property (nonatomic) IESLiveEffectPlayerView playerView;
@property (nonatomic) <IESLiveDIContext> DIContext;
@property (nonatomic) NSDictionary mixInfo;
@property (nonatomic) {CGSize=dd} videoSize;
- (id)initWithPreviewModel:DIContext:;
- (id)DIContext;
- (id)mixInfo;
- (void)reportError:previewModel:;
- (void)setDIContext:;
- (void)setMixInfo:;
- (void)setupPlayerWithPreviewModel:;
- (void)setPlayerView:;
- (void)layoutSubviews;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)playerView;
- (id)videoSize;
- (void)setVideoSize:;
@end
