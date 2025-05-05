@interface PSRestrictionsPINController : DevicePINController
- (id)init;
- (BOOL)validatePIN:;
- (id)title;
- (void)setPIN:;
- (id)stringsBundle;
- (id)pinInstructionsPrompt;
- (BOOL)pinIsAcceptable:outError:;
- (id)defaultsID;
- (id)failedAttemptsKey;
- (id)blockTimeIntervalKey;
- (id)blockedStateKey;
- (BOOL)simplePIN;
- (int)pinLength;
- (BOOL)isNumericPIN;
- (id)pinInstructionsPromptFont;
+ (BOOL)settingEnabled;
@end
