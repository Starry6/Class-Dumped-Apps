@interface IDSSessionInfoMetadataSerializer : NSObject
+ (id)serializeSessionInfoMetadata:;
+ (void)_writeStringToByteBuffer:buffer:;
+ (void)_writeNumberToByteBuffer:buffer:;
+ (void)_writeDictionaryToByteBuffer:buffer:;
+ (void)_writeArrayToByteBuffer:buffer:;
+ (id)deserializeSessionInfoMetadata:;
+ (id)_readArrayFromByteArray:fieldByteSize:byteBuffer:;
+ (id)_readDictionaryFromByteArray:fieldByteSize:byteBuffer:;
@end
