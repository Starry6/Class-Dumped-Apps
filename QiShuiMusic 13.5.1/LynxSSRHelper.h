@interface LynxSSRHelper : NSObject
- (void)onHydrateBegan:;
- (BOOL)isHydratePending;
- (void)onErrorOccurred:sourceError:;
- (void)onHydrateFinished:;
- (void)onLoadSSRDataBegan:;
- (BOOL)shouldSendEventToSSR;
- (id)init;
+ (id)processEventParams:;
@end
