@interface AWEECOMIMDynamicFootNoteView : UIView
@property (nonatomic) BDPCDDynamicCardInsetsLabel contentLabel;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) BDPCDDynamicCardUIFootNoteModel itemModel;
- (id)itemModel;
- (void)setItemModel:;
- (id)leftIconView;
- (void)setLeftIconView:;
- (void)bindItemModel:isBigStyle:;
- (id)initWithFrame:;
- (void)customInit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)contentLabel;
- (void)setContentLabel:;
@end
