@interface SAPowerModeTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SATimestamp timestamp;
@property (nonatomic) BOOL lowPowerModeChanged;
@property (nonatomic) BOOL lowPowerMode;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (BOOL)lowPowerMode;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)writeJSONDictionaryEntriesToStream:;
- (BOOL)lowPowerModeChanged;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
@end
