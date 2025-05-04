@interface AWENoxusPlayerStateTipView : UIView
@property (nonatomic) AWENoxusGradientView backView;
@property (nonatomic) YYLabel tipLabel;
@property (nonatomic) AWENoxusHighlightButton closeBtn;
@property (nonatomic) <AWENoxusPlayerStateTipDelegate> delegate;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)setSettingType:contentType:stateType:;
- (void)layoutWithCloseBtnShow:;
- (id)highlightedAttributed:withHighlightContent:tapAction:;
- (id)init;
- (id)delegate;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (void)setDelegate:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
