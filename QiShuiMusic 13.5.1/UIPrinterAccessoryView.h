@interface UIPrinterAccessoryView : UIView
@property (nonatomic) UIButton infoButton;
@property (nonatomic) UIView statusView;
@property (nonatomic) <UIPrinterAccessoryViewDelegate> delegate;
@property (nonatomic) NSInteger printerState;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)infoButton;
- (void)setInfoButton:;
- (void)infoButtonPressed:;
- (void)setPrinterState:;
- (id)statusView;
- (void)setStatusView:;
- (int)printerState;
@end
