@interface AWEExceptionContainerViewController : UIViewController
@property (nonatomic) AWEUIKitViewControllerEmptyPageConfig customConfig;
@property (nonatomic) <AWEExceptionContainerViewControllerDelegate> delegate;
@property (nonatomic) Q state;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)customConfig;
- (void)setCustomConfig:;
- (id)delegate;
- (id)initWithConfig:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setState:;
@end
