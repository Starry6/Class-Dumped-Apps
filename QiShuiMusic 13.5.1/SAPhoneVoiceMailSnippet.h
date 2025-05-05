@interface SAPhoneVoiceMailSnippet : SAUISnippet
@property (nonatomic) NSNumber autoPlay;
@property (nonatomic) NSArray calls;
@property (nonatomic) NSArray playVoiceMailCommands;
@property (nonatomic) <SAClientBoundCommand> postPlayCommand;
- (id)groupIdentifier;
- (void)setCalls:;
- (id)encodedClassName;
- (id)calls;
- (id)autoPlay;
- (void)setAutoPlay:;
- (id)playVoiceMailCommands;
- (void)setPlayVoiceMailCommands:;
- (id)postPlayCommand;
- (void)setPostPlayCommand:;
+ (id)voiceMailSnippet;
+ (id)voiceMailSnippetWithDictionary:context:;
@end
