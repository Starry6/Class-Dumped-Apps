@interface AWEIMThinkingContentPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMTapUIViewPresenter titleContainer;
@property (nonatomic) AWEIMUILabelPresenter titleLabel;
@property (nonatomic) AWEIMUIImageViewPresenter titleIcon;
@property (nonatomic) AWEIMUIViewPresenter line;
@property (nonatomic) AWEIMSelectableLabelPresenter contentLabel;
@property (nonatomic) AWEIMUIViewPresenter box;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (void)p_updateProps;
- (id)p_lineColor;
- (id)initWithContext:;
- (void)setTitleLabel:;
- (id)line;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setBox:;
- (id)box;
- (void)setLine:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setTitleIcon:;
- (id)titleIcon;
- (void)setTitleContainer:;
- (id)titleContainer;
@end
