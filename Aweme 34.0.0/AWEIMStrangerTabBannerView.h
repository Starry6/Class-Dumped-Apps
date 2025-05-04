@interface AWEIMStrangerTabBannerView : UIView
@property (nonatomic) UIView backColorView;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) @? tapAction;
@property (nonatomic) @? closeAction;
@property (nonatomic) UIImageView iconView;
- (void)refreshWithContent:highlightText:;
- (void)bannerViewTapped;
- (id)backColorView;
- (id)makeAttrStringWithContent:highlight:;
- (void)setBackColorView:;
- (void)setCloseAction:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)closeAction;
- (void)layoutSubviews;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)tapAction;
- (void)setTapAction:;
@end
