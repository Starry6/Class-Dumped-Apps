@interface SAWaitInfo : SABlockingInfo
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) S type;
@property (nonatomic) Q owner;
@property (nonatomic) Q context;
- (id)init;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (unsigned long long)context;
- (unsigned long long)owner;
- (void)addSelfToSerializationDictionary:;
- (unsigned long long)hash;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned short)type;
- (long long)compare:;
- (BOOL)isEqual:;
- (unsigned long long)blockingTid;
- (int)blockingPid;
- (id)initWithKCDataWaitInfo:;
- (id)descriptionForPid:tid:options:nameCallback:;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
