@interface SignpostSupportSerializabledObjectCollection : NSObject
@property (nonatomic) NSArray objectArray;
@property (nonatomic) NSNumber formatVersion;
@property (nonatomic) Q machContinuousTimeFirst;
@property (nonatomic) Q machContinuousTimeLast;
- (id)formatVersion;
- (void).cxx_destruct;
- (id)initWithSerializeableObjectArray:;
- (id)newSerializedCollection:;
- (id)initWithData:errorOut:;
- (id)objectArray;
- (unsigned long long)machContinuousTimeFirst;
- (unsigned long long)machContinuousTimeLast;
+ (BOOL)_versionIsSupported:;
+ (id)_deserializedDictionaryForData:errorOut:;
+ (BOOL)timeRangeForSerializedCollection:continuousTimeFirstOut:continuousTimeLastOut:errorOut:;
+ (BOOL)_enumerateSignpostObjectsInDeserializedCollectionDictionary:processingBlock:errorOut:;
+ (BOOL)enumerateSignpostSupportObjectsInSerializedCollection:processingBlock:errorOut:;
@end
