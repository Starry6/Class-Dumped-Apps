@interface DDURLifier : NSObject
+ (id)urlMatchesForString:;
+ (id)urlMatchesForString:includingTel:;
+ (id)urlMatchesForString:phoneNumberTypes:;
+ (id)urlMatchesForString:usingScanner:withPhoneNumberTypes:referenceDate:timeZone:storingResultsIn:;
+ (BOOL)urlIfyTextNode:inNode:forMatches:;
+ (BOOL)urlIfyNode:phoneNumberTypes:;
+ (BOOL)urlIfyNode:;
+ (id)urlIfyNode:usingScanner:phoneNumberTypes:;
+ (id)urlIfyNode:usingScanner:phoneNumberTypes:withReferenceDate:andTimeZone:;
@end
