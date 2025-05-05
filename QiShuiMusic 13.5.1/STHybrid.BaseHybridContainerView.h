@interface STHybrid.BaseHybridContainerView : UIView
- (void)container:onKeyBoardChange:eventType:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)container:didFetchedResource:error:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didRecieveError:;
- (void)container:didStartFetchResourceWithURL:;
- (void)containerDidFirstScreen:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
