@interface SATimerSnippet : SAUISnippet
@property (nonatomic) NSArray timers;
- (id)timers;
- (id)groupIdentifier;
- (void)setTimers:;
- (id)encodedClassName;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
