@interface SAARParaphrasedSuggestedResult : SAAceView
@property (nonatomic) <SAClientBoundCommand> command;
@property (nonatomic) NSString displayText;
@property (nonatomic) q rank;
- (id)groupIdentifier;
- (long long)rank;
- (id)displayText;
- (id)command;
- (id)encodedClassName;
- (void)setDisplayText:;
- (void)setRank:;
- (void)setCommand:;
+ (id)paraphrasedSuggestedResult;
+ (id)paraphrasedSuggestedResultWithDictionary:context:;
@end
