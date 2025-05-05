@interface SAFanSpeed : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SATimestamp timestamp;
@property (nonatomic) NSInteger fanSpeed;
@property (nonatomic) BOOL fanSpeedIsValid;
- (id)init;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (id)initEmpty;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void).cxx_destruct;
- (id)timestamp;
- (id)initWithTimestamp:;
- (BOOL)fanSpeedIsValid;
- (int)fanSpeed;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
