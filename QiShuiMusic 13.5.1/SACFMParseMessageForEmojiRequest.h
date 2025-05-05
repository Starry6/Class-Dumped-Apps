@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand
@property (nonatomic) NSString locale;
@property (nonatomic) NSString messageText;
- (void)setLocale:;
- (id)groupIdentifier;
- (id)locale;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)messageText;
- (void)setMessageText:;
+ (id)parseMessageForEmojiRequest;
+ (id)parseMessageForEmojiRequestWithDictionary:context:;
@end
