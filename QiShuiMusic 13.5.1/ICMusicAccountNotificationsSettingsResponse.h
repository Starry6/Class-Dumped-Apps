@interface ICMusicAccountNotificationsSettingsResponse : NSObject
@property (nonatomic) NSArray settingsSwitches;
@property (nonatomic) BOOL wasSuccessful;
- (BOOL)wasSuccessful;
- (id)initWithResponseDictionary:;
- (void).cxx_destruct;
- (id)settingsSwitches;
+ (id)createResponseBodyWithSwitches:;
@end
