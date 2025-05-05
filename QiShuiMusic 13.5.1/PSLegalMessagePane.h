@interface PSLegalMessagePane : PSEditingPane
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (void)webViewDidFinishLoad:;
- (id)markupString;
- (void)viewDidBecomeVisible;
- (BOOL)handlesDoneButton;
- (BOOL)shouldInsetContent;
- (void)layoutInsetContent:;
- (id)scrollViewToBeInsetted;
- (id)htmlFileLocation;
@end
