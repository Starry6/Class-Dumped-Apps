@interface SASUserUtteranceEditableTextSnippet : SAUISnippet
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString utterance;
- (void)setSessionId:;
- (id)sessionId;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)utterance;
- (void)setUtterance:;
+ (id)userUtteranceEditableTextSnippet;
+ (id)userUtteranceEditableTextSnippetWithDictionary:context:;
@end
