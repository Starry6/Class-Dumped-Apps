@interface AWEGoodsDisclaimerTextViewDelegate : NSObject
@property (nonatomic) AWEUIAlertView alertView;
@property (nonatomic) NSString webVCReactID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindToAWEUIAlertView:;
- (void)webviewWillDisappear:;
- (id)webVCReactID;
- (void)openURLString:;
- (void)setWebVCReactID:;
- (id)init;
- (void)dealloc;
- (id)alertView;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void)setAlertView:;
- (void).cxx_destruct;
@end
