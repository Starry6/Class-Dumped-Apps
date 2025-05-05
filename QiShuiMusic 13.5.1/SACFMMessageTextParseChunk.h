@interface SACFMMessageTextParseChunk : AceObject
@property (nonatomic) NSString chunkType;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
- (id)chunkType;
- (void)setChunkType:;
+ (id)messageTextParseChunk;
+ (id)messageTextParseChunkWithDictionary:context:;
@end
