@interface AWEIMSDKSettingManager : NSObject
@property (nonatomic) BOOL imCoreAsyncCreateRequest;
- (void)flushSettingsToIMCore;
- (BOOL)imCoreAsyncCreateRequest;
- (id)init;
+ (id)sharedInstance;
@end
