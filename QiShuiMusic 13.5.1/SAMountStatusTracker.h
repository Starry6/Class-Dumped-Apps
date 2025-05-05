@interface SAMountStatusTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)fillInThreadsSeen;
- (void)enumerateUnresponsiveMountsBetweenStartTime:endTime:block:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)hasUnresponsiveMountsForThreadID:;
- (void).cxx_destruct;
- (void)enumerateMountsBlockingThread:betweenStartTime:endTime:block:;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
