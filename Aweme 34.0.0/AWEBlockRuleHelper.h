@interface AWEBlockRuleHelper : NSObject
- (id)aAWESiriShortCutCommonAdapter;
- (BOOL)isEnableJumpFromSiri;
+ (BOOL)p_shouldStopInBasicFunctionMode;
+ (BOOL)p_shouldStopInTeenMode;
+ (Class)aAWESiriShortCutCommonAdapterClass;
+ (BOOL)isPushForbidden;
+ (BOOL)p_shouldStopInDigitalWellbeing;
+ (id)sharedInstance;
@end
