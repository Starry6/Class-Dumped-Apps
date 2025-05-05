@interface STAd.FeedRewardMannorCardManager : NSObject
- (void)mannorComponent:didChangeIntrinsicContentSize:;
- (void)mannorComponentClose:componentType:;
- (void)mannorComponentDidFinishLoad:componentType:;
- (void)mannorComponentDidLoadFailed:error:componentType:;
- (void)mannorComponentDidStartLoad:componentType:;
- (void)mannorComponentDowngrade:errorMessage:componentType:;
- (void)mannorComponentHide:componentType:;
- (void)mannorComponentInit:componentType:;
- (void)mannorComponentRenderFirstScreen:componentType:;
- (void)mannorComponentShow:componentType:;
- (id)init;
- (void).cxx_destruct;
@end
