@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell
@property (nonatomic) NSArray actions;
- (void)setActions:;
- (id)actions;
- (id)defaultContext;
- (void).cxx_destruct;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)updateTransportButtons;
- (void)transportButton1Clicked:;
- (void)transportButton2Clicked:;
- (void)transportButton3Clicked:;
- (id)transportsMapping;
@end
