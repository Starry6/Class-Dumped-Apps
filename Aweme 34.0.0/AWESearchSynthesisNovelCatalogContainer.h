@interface AWESearchSynthesisNovelCatalogContainer : UIView
@property (nonatomic) UIButton bgView;
@property (nonatomic) AWESearchSynthesisNovelCatalogView catalogView;
@property (nonatomic) @? dismissBlock;
- (void)setCatalogView:;
- (id)catalogView;
- (void)showInView;
- (void)onPanGes:;
- (void)bgViewClick;
- (id)initWithFrame:;
- (id)contentView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
