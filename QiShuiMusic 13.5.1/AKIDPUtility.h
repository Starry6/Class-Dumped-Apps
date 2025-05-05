@interface AKIDPUtility : NSObject
+ (id)convertError:;
+ (id)idpURLFromRequest:;
+ (id)parametersFromResponseURL:request:;
+ (id)parametersFromRequest:;
+ (id)microsoftLoginURLFromParameters:;
+ (BOOL)dictionary:containsKeys:;
+ (BOOL)isMicrosoftRequestDictionary:;
@end
