@interface IESLiveSaaSPuzzleAppInfo : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appVersionCode;
- (long long)currentAPPUIMode;
- (double)currentFontScale;
- (id)fpsInDuration:;
- (BOOL)isBOEEnabled;
- (BOOL)isPPEEnabled;
- (BOOL)isTeenMode;
- (id)lane;
- (long long)netQuality;
- (double)veDeviceScore;
- (id)channel;
- (id)languageCode;
- (id)region;
- (id)installID;
- (id)appName;
- (id)deviceID;
- (id)appID;
- (id)accessCode;
- (id)appBuildNumber;
+ (id)providePuzzleAppInfoServiceProtocol:;
@end
