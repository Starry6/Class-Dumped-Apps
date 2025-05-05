@interface IESLivePBBaseMessage : GPBMessage
- (id)valueForUndefinedKey:;
+ (BOOL)commonKVCProtectionEnabled;
+ (BOOL)replaceEnumEnabled;
+ (void)setCommonKVCProtectionEnabled:;
+ (void)setReplaceEnumEnabled:;
+ (BOOL)resolveInstanceMethod:;
@end
