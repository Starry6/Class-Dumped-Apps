@interface AWEBDARifleViewDelegateProxy : NSObject
@property (nonatomic) AWEBDARifleView bdaRifleView;
@property (nonatomic) NSDate startDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdaRifleView;
- (void)rifleViewWillStartLoading:;
- (void)rifleView:didChangeIntrinsicContentSize:;
- (void)rifleViewDidStartLoading:;
- (void)rifleView:didStartFetchResourceWithURL:;
- (void)rifleView:didFetchedResource:error:;
- (void)rifleViewvDidFirstScreen:;
- (void)rifleView:didFinishLoadWithURL:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (void)rifleViewDidUpdate:;
- (void)rifleView:didRecieveError:;
- (void)rifleView:didReceivePerformance:;
- (void)rifleViewDidPageUpdate:;
- (void)rifleViewDidConstructJSRuntime:;
- (void)rifleView:updateTitle:;
- (void)setBdaRifleView:;
- (id)startDate;
- (void)setStartDate:;
- (void).cxx_destruct;
@end
