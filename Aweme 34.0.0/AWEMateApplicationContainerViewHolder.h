@interface AWEMateApplicationContainerViewHolder : AWEBaseListViewHolder
@property (nonatomic) DUXTip tip;
@property (nonatomic) @? closeAction;
- (void)setupViewHolder;
- (void)showTip;
- (id)fontSize:weight:;
- (void)hideTip;
- (void)setCloseAction:;
- (double)headerViewHeight;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)tip;
- (id)closeAction;
- (void)setTip:;
@end
