@interface SAThread : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q threadId;
@property (nonatomic) SATimestamp creationTimestamp;
@property (nonatomic) SATimestamp exitTimestamp;
@property (nonatomic) BOOL isGlobalForcedIdle;
@property (nonatomic) BOOL isProcessorIdleThread;
@property (nonatomic) BOOL isMainThread;
@property (nonatomic) NSArray threadStates;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)enumerateThreadStatesBetweenStartTime:startSampleIndex:endTime:endSampleIndex:reverseOrder:block:;
- (BOOL)isMainThread;
- (id)lastThreadStateOnOrBeforeTime:sampleIndex:;
- (id)patchedStackForTruncatedStack:;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:withSampleIndex:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:sampleIndex:;
- (id)debugDescription;
- (id)exitTimestamp;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)isProcessorIdleThread;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:sampleIndex:;
- (id)firstThreadStateOnOrAfterTime:withSampleIndex:;
- (void).cxx_destruct;
- (id)firstThreadStateOnOrAfterTime:sampleIndex:;
- (id)threadStates;
- (id)initWithId:;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:withSampleIndex:;
- (unsigned long long)threadId;
- (void)enumerateThreadStatesBetweenStartTime:endTime:reverseOrder:withSampleIndex:block:;
- (BOOL)isGlobalForcedIdle;
- (unsigned long long)sampleCountInTimestampRangeStart:end:;
- (id)lastThreadStateOnOrBeforeTime:withSampleIndex:;
- (id)creationTimestamp;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
