@interface SAUIPronunciationSnippet : SAUISnippet
@property (nonatomic) NSArray cancelCommands;
@property (nonatomic) NSString interactionId;
@property (nonatomic) NSString orthography;
@property (nonatomic) NSArray pronunciations;
@property (nonatomic) NSArray selectNoneCommands;
@property (nonatomic) NSString selectNoneText;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)orthography;
- (id)interactionId;
- (void)setInteractionId:;
- (void)setOrthography:;
- (id)pronunciations;
- (void)setPronunciations:;
- (id)cancelCommands;
- (void)setCancelCommands:;
- (id)selectNoneCommands;
- (void)setSelectNoneCommands:;
- (id)selectNoneText;
- (void)setSelectNoneText:;
+ (id)pronunciationSnippet;
+ (id)pronunciationSnippetWithDictionary:context:;
@end
