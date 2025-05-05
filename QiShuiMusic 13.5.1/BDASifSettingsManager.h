@interface BDASifSettingsManager : NSObject
+ (BOOL)enableSCCSecure;
+ (id)adTrackLogJSUrlString;
+ (id)allowInternalSchemeList;
+ (id)autoJumpHostAllowList;
+ (id)autoJumpSchemeAllowList;
+ (id)autoJumpURLAllowList;
+ (id)clickAutoJumpAllowList;
+ (id)clickJumpHostBlackList;
+ (id)clickJumpSchemeBlackList;
+ (float)clickJumpTimeInterval;
+ (id)clickJumpURLBlackList;
+ (id)frobidJumpTips;
+ (id)jsAlertHostBlackList;
+ (id)jsAlertSchemeBlackList;
+ (id)jsAlertURLBlackList;
+ (id)jsConfirmHostBlackList;
+ (id)jsConfirmSchemeBlackList;
+ (id)jsConfirmURLBlackList;
+ (id)jsPromptHostBlackList;
+ (id)jsPromptSchemeBlackList;
+ (id)jsPromptURLBlackList;
+ (id)sslErrorCodeList;
+ (id)sslErrorHostBlackList;
+ (id)sslErrorSchemeBlackList;
+ (id)sslErrorURLBlackList;
@end
