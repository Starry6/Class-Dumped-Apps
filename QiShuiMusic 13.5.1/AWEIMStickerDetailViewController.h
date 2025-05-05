@interface AWEIMStickerDetailViewController : UIViewController
@property (nonatomic) IESIMSaaSEmoticonModel emoticonModel;
@property (nonatomic) YYAnimatedImageView giphyImageView;
@property (nonatomic) UIButton addButton;
@property (nonatomic) NSString commentReferString;
- (BOOL)isExistEmoticon;
- (void)backBtnClicked;
- (id)commentReferString;
- (id)emoticonModel;
- (void)executeUpdateSticker;
- (id)giphyImageView;
- (id)initWithEmoticonModel:;
- (void)p_setupUI;
- (void)setCommentReferString:;
- (void)setEmoticonModel:;
- (void)setGiphyImageView:;
- (void)updateSticker;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)addButton;
- (void)setAddButton:;
@end
