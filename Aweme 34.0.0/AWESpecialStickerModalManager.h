@interface AWESpecialStickerModalManager : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) AWEWebViewController webViewController;
@property (nonatomic) BOOL webViewLoadSuccess;
@property (nonatomic) NSString URL;
@property (nonatomic) <AWESpecialStickerModalManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearWebViewIfNeeded;
- (void)webViewDidFinishNotification:;
- (void)setWebViewLoadSuccess:;
- (BOOL)webViewLoadSuccess;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (id)containerView;
- (id)URL;
- (void)setContainerView:;
- (void)setURL:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)webViewController;
- (void)setWebViewController:;
- (void)dismissNotification:;
@end
