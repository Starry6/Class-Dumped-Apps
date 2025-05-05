@interface IESECLiveListTemporaryTagView : UIView
@property (nonatomic) UIImageView tmpTagImgView;
@property (nonatomic) NSString imgURL;
@property (nonatomic) q state;
@property (nonatomic) <IESECLiveListTemporaryTagViewDelegate> delegate;
- (void)endShow;
- (id)imgURL;
- (void)p_delegateStateChanged:;
- (void)p_loadImageWithURL:;
- (void)preloadImgURL:;
- (void)setImgURL:;
- (void)setTmpTagImgView:;
- (void)startShowWithImgURL:duration:;
- (id)tmpTagImgView;
- (void)setState:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
@end
