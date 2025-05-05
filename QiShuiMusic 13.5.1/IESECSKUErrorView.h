@interface IESECSKUErrorView : UIView
@property (nonatomic) <IESECSKUErrorViewDelegate> delegate;
@property (nonatomic) IESECUIImageView errView;
- (id)errView;
- (void)updateErrorView;
- (void)closeSKUView;
- (void)reloadSKUView;
- (void)setErrView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setupUI;
@end
