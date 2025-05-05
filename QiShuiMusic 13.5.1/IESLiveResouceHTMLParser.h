@interface IESLiveResouceHTMLParser : NSObject
- (id)parseHTMLWithString:error:;
- (void)parseNode:toAttribute:;
- (id)parseRoot:withAttribute:;
- (void)parseSpanStyle:toAttribute:;
- (void)parseStrikeStyle:toAttribute:;
- (id)init;
+ (id)sharedInstance;
@end
