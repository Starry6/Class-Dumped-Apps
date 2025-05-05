@interface SACFMPlainTextParseChunk : SACFMMessageTextParseChunk
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)plainTextParseChunk;
+ (id)plainTextParseChunkWithDictionary:context:;
@end
