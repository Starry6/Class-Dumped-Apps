@interface GPBUnknownFieldSet : NSObject
- (void)dealloc;
- (void)addField:;
- (id)data;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)writeToCodedOutputStream:;
- (void)addUnknownMapEntry:value:;
- (unsigned long long)serializedSize;
- (BOOL)hasField:;
- (id)getField:;
- (unsigned long long)countOfFields;
- (id)sortedFields;
- (void)writeAsMessageSetTo:;
- (unsigned long long)serializedSizeAsMessageSet;
- (id)mutableFieldForNumber:create:;
- (void)mergeUnknownFields:;
- (void)mergeFromData:;
- (void)mergeVarintField:value:;
- (BOOL)mergeFieldFrom:input:;
- (void)mergeMessageSetMessage:data:;
- (void)mergeFromCodedInputStream:;
- (void)getTags:;
+ (BOOL)isFieldTag:;
@end
