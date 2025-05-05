@interface IMAttributedStringParser : NSObject
- (void)parseContext:;
- (void)_preprocessWithContext:string:;
+ (id)sharedInstance;
@end
