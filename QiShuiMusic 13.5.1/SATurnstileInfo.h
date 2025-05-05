@interface SATurnstileInfo : SABlockingInfo
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q context;
@property (nonatomic) C priority;
@property (nonatomic) C numHops;
@property (nonatomic) Q flags;
- (id)init;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (unsigned long long)context;
- (void)addSelfToSerializationDictionary:;
- (unsigned long long)hash;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (long long)compare:;
- (unsigned long long)flags;
- (BOOL)isEqual:;
- (unsigned char)priority;
- (unsigned long long)blockingTid;
- (int)blockingPid;
- (id)initWithKCDataTurnstileInfo:;
- (id)descriptionForPid:tid:threadPriority:options:nameCallback:;
- (unsigned char)numHops;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
