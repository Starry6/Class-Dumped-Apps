@interface NSAKDeserializer : NSObject
- (void)dealloc;
- (id)initForDeserializerStream:;
- (id)deserializerStream;
- (id)deserializeNewObject;
- (id)deserializeNewData;
- (id)deserializeData:;
- (id)deserializeNewString;
- (id)deserializeNewKeyString;
- (id)deserializeString:;
- (id)deserializeNewList;
- (id)deserializeList:;
- (id)deserializeListItemIn:at:length:;
- (id)deserializeNewPList;
- (id)deserializePList:;
- (id)deserializePListKeyIn:;
- (id)deserializePListValueIn:key:length:;
@end
