@interface SAHIDEvent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SATimestamp hidEventTimestamp;
@property (nonatomic) I hidEventType;
@property (nonatomic) NSString hidEventTypeString;
@property (nonatomic) NSArray steps;
@property (nonatomic) double thresholdToGroupSameEventType;
- (id)steps;
- (BOOL)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary:;
- (void)addSelfToSerializationDictionary:;
- (void)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary:;
- (id)debugDescription;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)hidEventType;
- (void).cxx_destruct;
- (double)thresholdToGroupSameEventType;
- (id)hidEventTypeString;
- (id)hidEventTimestamp;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength:;
+ (id)classDictionaryKey;
+ (void)parseKTrace:findingHIDEvents:;
@end
