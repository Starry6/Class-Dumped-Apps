@interface SAGesture : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void).cxx_destruct;
- (id)initWithPid:type:startTime:;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
