@interface PSAboutHTMLSheetViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)loadView;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (void)donePressed;
- (void)viewDidBecomeVisible;
- (void)setHTMLContent:isFragment:;
+ (void)presentAboutSheetTitled:HTMLContent:fromViewController:;
@end
