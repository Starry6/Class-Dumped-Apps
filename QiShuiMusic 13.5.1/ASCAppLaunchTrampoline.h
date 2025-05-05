@interface ASCAppLaunchTrampoline : NSObject
@property (nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> workspace;
- (id)workspace;
- (id)handleURL:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkspace:;
- (id)openApplicationWithBundleIdentifier:payloadURL:;
- (id)handleURL:workspace:;
- (id)openApplicationWithBundleIdentifier:payloadURL:workspace:;
- (id)productPageURLForAdamId:eventId:;
- (id)productPageURLForAdamId:eventId:encodedMetrics:;
- (id)productPageURLForAdamId:eventId:encodedMetrics:sourceApplication:;
- (id)productPageURLForAdamId:deeplink:eventId:encodedMetrics:sourceApplication:;
+ (id)log;
@end
