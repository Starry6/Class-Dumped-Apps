@interface SARecipeState : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SAThread thread;
@property (nonatomic) Q threadStateIndex;
@property (nonatomic) SAThreadState threadState;
- (id)thread;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)threadState;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void).cxx_destruct;
- (unsigned long long)threadStateIndex;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
