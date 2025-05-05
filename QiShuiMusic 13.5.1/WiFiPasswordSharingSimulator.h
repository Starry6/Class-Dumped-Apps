@interface WiFiPasswordSharingSimulator : NSObject
- (id)init;
- (void)dealloc;
- (void)service:receivedNetworkInfo:;
- (BOOL)service:shouldPromptForNetwork:;
- (void)runWithSSID:reply:;
@end
