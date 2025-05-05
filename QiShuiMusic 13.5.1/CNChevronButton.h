@interface CNChevronButton : UIButton
@property (nonatomic) CNAtomView<CNChevronButtonMenuDelegate> delegateView;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)delegateView;
- (void)setDelegateView:;
@end
