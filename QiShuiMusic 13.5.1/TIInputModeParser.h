@interface TIInputModeParser : NSObject
- (id)init;
- (id)parseInputMode:;
- (id)stringByReplacingInvalidCharactersWithUnderscores:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
