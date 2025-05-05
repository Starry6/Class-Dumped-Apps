@interface SAMemoryPressureEvent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SATimestamp timestamp;
@property (nonatomic) Q availableBytes;
@property (nonatomic) C memoryStatusLevel;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (unsigned long long)availableBytes;
- (unsigned char)memoryStatusLevel;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
