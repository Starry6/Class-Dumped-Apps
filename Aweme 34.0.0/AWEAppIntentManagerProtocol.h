@interface AWEAppIntentManagerProtocol : NSObject
- (void)updateAppShortcut;
- (void)injectIntentConfig:;
- (void)perform:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
