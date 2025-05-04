@interface AWEDYFeedModuleService : AWEFeedModuleService
- (void)startNetworkDetection;
- (void)startNetworkByPassOnlyDetectionIfNeeded;
- (void)onFeedContentReceived:withError:;
- (BOOL)isInDetectingProcess;
- (BOOL)isInNoNetworkState;
- (void)checkNoNetworkNoticeStatusWithDelay:completion:;
- (id)currentDisplayingItemID;
- (void)updateCurrentDisplayingItemID:;
- (void)getSchemeFromShareTokenForType:;
- (void)transferFromShareToken:;
- (void)transferFromShareToken:withCompleteHandler:;
- (BOOL)containShareToken:;
- (void)parseActivityToken:carrierType:sourceFrom:Completion:;
- (id)musicalModelOwnerDisplayName:;
- (BOOL)isDetectionEnabled;
@end
