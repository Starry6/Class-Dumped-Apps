@interface VMUSimpleDeserializer : VMUAbstractSerializer
- (void)dealloc;
- (id)initWithData:;
- (void).cxx_destruct;
- (unsigned int)deserialize32WithError:;
- (unsigned long long)deserialize64WithError:;
- (void)skipFields:;
- (id)copyDeserializedStringWithID:error:;
- (id)copyDeserializedStringWithError:;
- (id)copyDeserializedNullTerminatedBytesWithError:;
- (id)_deserializeValues:error:;
@end
