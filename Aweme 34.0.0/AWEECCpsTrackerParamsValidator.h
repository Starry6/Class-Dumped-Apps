@interface AWEECCpsTrackerParamsValidator : NSObject
- (BOOL)performSelectorWithType:objects:;
- (BOOL)checkParamWithRegex:value:;
- (BOOL)checkParamWithLength:value:;
- (BOOL)checkParamWithEnum:value:;
- (BOOL)checkParamWithNonull:value:;
- (BOOL)validateValue:config:;
- (SEL)selectorForType:;
@end
