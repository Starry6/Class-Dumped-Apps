@interface CNSocialProfileURLParser : NSObject
+ (id)parseSocialProfileURL:;
+ (id)parseURLStringWithRegularExpressions:;
+ (void)enumerateServiceMatchesForURLString:withBlock:;
+ (void)enumerateMatchesWithRegexPattern:inString:withBlock:;
+ (id)parseURLStringByInference:;
+ (id)servicesDictionary;
@end
