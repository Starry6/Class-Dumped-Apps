@interface WKSafeBrowsingWarning : UIScrollView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updateContentSize;
- (id).cxx_construct;
- (void)showDetailsClicked;
- (void)goBackClicked;
- (id)initWithFrame:safeBrowsingWarning:completionHandler:;
- (void)addContent;
- (void)layoutText;
- (void)clickedOnLink:;
- (BOOL)forMainFrameNavigation;
@end
