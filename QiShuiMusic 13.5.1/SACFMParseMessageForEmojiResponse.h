@interface SACFMParseMessageForEmojiResponse : SABaseCommand
@property (nonatomic) NSArray parseChunks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)parseChunks;
- (void)setParseChunks:;
+ (id)parseMessageForEmojiResponse;
+ (id)parseMessageForEmojiResponseWithDictionary:context:;
@end
