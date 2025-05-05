@interface WBSDKComposerWebViewController : WBSDKBasicWebViewController
@property (nonatomic) BOOL isCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shardDidFinishWithResponseInfo:;
- (id)compressImage:;
- (id)defaultParaDictsForRequest;
- (BOOL)isCallBack;
- (void)postImageToServer;
- (void)request:didFinishLoadingWithResult:;
- (void)setIsCallBack:;
- (void)startWebViewRequest;
- (void)wbsdk_webView:decidePolicyForNavigationAction:decisionHandler:;
- (void)didReceiveMemoryWarning;
- (void)request:didFailWithError:;
- (void)viewDidLoad;
@end
