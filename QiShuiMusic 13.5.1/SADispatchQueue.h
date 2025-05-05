@interface SADispatchQueue : SARecipe
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString dispatchQueueLabel;
@property (nonatomic) BOOL hasConcurrentExecution;
@property (nonatomic) Q dispatchQueueId;
@property (nonatomic) NSArray dispatchQueueStates;
@property (nonatomic) BOOL isConcurrent;
- (BOOL)hasConcurrentExecution;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (BOOL)isConcurrent;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)dispatchQueueLabel;
- (id)dispatchQueueStates;
- (unsigned long long)dispatchQueueId;
- (void).cxx_destruct;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
