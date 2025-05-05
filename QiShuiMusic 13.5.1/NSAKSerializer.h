@interface NSAKSerializer : NSObject
- (void)dealloc;
- (unsigned long long)serializeObject:;
- (unsigned long long)serializeString:;
- (id)initForSerializerStream:;
- (id)serializerStream;
- (unsigned long long)serializeData:;
- (unsigned long long)serializeList:;
- (unsigned long long)serializeListItemIn:at:;
- (unsigned long long)serializePropertyList:;
- (unsigned long long)serializePListKeyIn:key:value:;
- (unsigned long long)serializePListValueIn:key:value:;
@end
