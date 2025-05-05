@interface VCSParser : NSObject
+ (id)parseVCSData:;
+ (id)parseVCSFile:;
+ (unsigned long long)decodeVCSLine:withParseState:;
+ (unsigned long long)beginVCSEntity:withParseState:;
+ (unsigned long long)endVCSEntity:withParseState:;
@end
