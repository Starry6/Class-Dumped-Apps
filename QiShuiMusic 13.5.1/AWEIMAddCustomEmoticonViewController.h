@interface AWEIMAddCustomEmoticonViewController : UIViewController
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) YYImage image;
@property (nonatomic) NSData data;
@property (nonatomic) PHAsset asset;
@property (nonatomic) IESIMUITextLoadingView hud;
@property (nonatomic) UIView backgoundView;
- (void)backBtnClicked;
- (id)backgoundView;
- (void)ensureAddEmoticon;
- (id)initWithImage:data:asset:;
- (void)p_setupUI;
- (void)p_uploadEmoticonStatus:;
- (void)setBackgoundView:;
- (void)successAddCustomSticker;
- (void)dealloc;
- (id)data;
- (id)asset;
- (void)setImage:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setAsset:;
- (id)image;
- (void)viewDidLoad;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (id)hud;
- (void)setHud:;
@end
