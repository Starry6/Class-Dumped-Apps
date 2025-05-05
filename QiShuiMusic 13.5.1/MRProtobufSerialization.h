@interface MRProtobufSerialization : NSObject
@property (nonatomic) NSDictionary dictionaryKeyToProtobufKeyMapping;
@property (nonatomic) # protobufClass;
@property (nonatomic) @? dictionaryValueToProtobufValueTransformer;
@property (nonatomic) @? protobufValueToDictionaryValueTransformer;
- (void).cxx_destruct;
- (void)setDictionaryKeyToProtobufKeyMapping:;
- (id)createDictionaryFromProtobuf:;
- (id)createProtobufFromDictionary:;
- (id)dictionaryKeyToProtobufKeyMapping;
- (Class)protobufClass;
- (void)setProtobufClass:;
- (id)dictionaryValueToProtobufValueTransformer;
- (void)setDictionaryValueToProtobufValueTransformer:;
- (id)protobufValueToDictionaryValueTransformer;
- (void)setProtobufValueToDictionaryValueTransformer:;
@end
