@interface AWEDitoEmptyViewController : UIViewController
@property (nonatomic) <AWEDitoEmptyPlaceholderDelegate> delegate;
@property (nonatomic) DitoPageContext context;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageBelowView;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end
