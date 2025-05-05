@interface SAMountSnapshot : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void).cxx_destruct;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
