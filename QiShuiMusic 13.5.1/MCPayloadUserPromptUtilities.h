@interface MCPayloadUserPromptUtilities : NSObject
+ (id)promptDictionaryForKey:title:description:retypeDescription:finePrint:defaultValue:placeholderValue:minimumLength:fieldType:flags:;
+ (id)prioritizeUserInput:key:overField:;
@end
