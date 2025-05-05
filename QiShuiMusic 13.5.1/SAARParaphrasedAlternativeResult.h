@interface SAARParaphrasedAlternativeResult : SAAceView
@property (nonatomic) <SAClientBoundCommand> command;
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString paraphrasedIntent;
- (id)groupIdentifier;
- (id)displayText;
- (id)command;
- (id)encodedClassName;
- (void)setDisplayText:;
- (void)setCommand:;
- (id)paraphrasedIntent;
- (void)setParaphrasedIntent:;
+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:context:;
@end
