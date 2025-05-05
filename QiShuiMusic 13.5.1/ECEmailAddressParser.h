@interface ECEmailAddressParser : NSObject
+ (BOOL)validateLocalPart:;
+ (BOOL)_validateString:withFunction:;
+ (BOOL)parseEmailAddressString:displayName:localPart:domain:groupList:;
+ (BOOL)parseString:emailAddressList:;
+ (BOOL)validateDisplayName:;
+ (BOOL)validateDomain:;
@end
