@interface AWENoticeImpl.AWENoticeInteractionContentContainer : AWENoticeInteractionBaseContainer
@property (nonatomic) YYLabel assemblyContentLabel;
@property (nonatomic) YYLabel assemblyDeleteTipLabel;
@property (nonatomic) BDImageView stickerOrPictureView;
- (double)contentHeightWithContentWidth:;
- (BOOL)isTwoContentLine;
- (id)assemblyContentLabel;
- (void)setAssemblyContentLabel:;
- (id)assemblyDeleteTipLabel;
- (void)setAssemblyDeleteTipLabel:;
- (id)stickerOrPictureView;
- (void)setStickerOrPictureView:;
- (void)handlerTapStickerOrPictureViewWithSender:;
- (id)createStickerOrPictureView;
- (id)createAssemblyContentLabel;
- (id)createAssemblyDeleteTipLabel;
- (void)configWithCellModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setupUI;
- (void)configLayout;
@end
