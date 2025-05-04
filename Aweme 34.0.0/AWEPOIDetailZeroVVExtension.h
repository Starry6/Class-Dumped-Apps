@interface AWEPOIDetailZeroVVExtension : AWEPOIBaseExtension
@property (nonatomic) AWEPOIDetailZeroVVReporter zeroVVReporter;
- (void)initializeExtension;
- (void)ditoLynxExtensionV2:didStartToLoadLynxContainer:tag:;
- (void)ditoLynxExtensionV2:didReceiveError:withView:;
- (void)ditoLynxExtensionV2:didReceiveFirstScreenWithView:;
- (void)ditoLynxExtensionV2:viewDidUpdate:;
- (id)zeroVVReporter;
- (void)setZeroVVReporter:;
- (void).cxx_destruct;
@end
