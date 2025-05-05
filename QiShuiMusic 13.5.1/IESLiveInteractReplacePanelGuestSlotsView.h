@interface IESLiveInteractReplacePanelGuestSlotsView : UIView
@property (nonatomic) UIButton clickBtn;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) IESLiveInteractReplacePanelGuestSlotsModel model;
@property (nonatomic) @? IESLiveInteractReplacePanelGuestSlotClickBlock;
- (id)IESLiveInteractReplacePanelGuestSlotClickBlock;
- (id)clickBtn;
- (void)initSuscribe;
- (void)setClickBtn:;
- (void)setIESLiveInteractReplacePanelGuestSlotClickBlock:;
- (void)upDateWithModel:;
- (void)updateImageWithCurmodel;
- (void)onClick;
- (id)model;
- (id)init;
- (void)setModel:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)initUI;
@end
